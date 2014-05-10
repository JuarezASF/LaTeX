.data
	str_entrada : .asciiz "Consideramos o polinômio p(x) = a*x^2 + b*x + c. \n\n"
	str_entre_a : .asciiz " Entre com o coeficiente a: \n \t"
	str_entre_b : .asciiz "\n Entre com o coeficiente b: \n \t"
	str_entre_c : .asciiz "\n Entre com o coeficiente c: \n \t"
	str_1	: .asciiz "O polinômio entrado foi: \n \n \t p(x) = "
	str_x2: .asciiz "*x^2 + "	
	str_x1: .asciiz "*x^1 + "
	str_x0: .asciiz "*x^0"
	newl: .asciiz "\n"
	tab: .asciiz "\t"	
	str_2	: .asciiz "As raízes do polinômio são: \n \tr1 = "
	str_3	: .asciiz "r2 = "
	str_4	: .asciiz " + i* "
	
	f_const0: .float 0.0
		
	d_const_neg_1:  .double -1.0
	d_const0:  .double 0.0
	d_const05: .double 0.5
	d_const1:  .double 1.0	
	d_const2:  .double 2.0	
	d_const4:  .double 4.0
.text	

#	STATUS ATUAL:
# O PROGRAMA FUNCIONA PARA OS CASOS COMUNS. FALTA LIDAR COM OS CASOS DEGENERADOS
#POR EXEMPLO, SE A == 0, ENTÃO O POLINÔMIO NÃO É DE ESGUNDA ORDEM. DEVEMOS TRATAR ESSE CASO

main:
	#imprime string de entrada
	li $v0, 4 #seta syscall para string
	la $a0, str_entrada
	syscall

	jal read_pol
	
	jal show_pol
	
	jal calcula_raizes_grau_2
	
	jal mostra_raizes_grau_2
	
	j exit_program
	
read_pol: 
#recebe: nada
#faz: pede ao usuÃ¡rio a, b, c e os coloca em f0, f1 e f2 respectivamente
#altera registradores: f0, f1 e f2

	#usaremos: v0, a0
	addi $sp, $sp, -8
	sw $a0, 4($sp)
	sw $v0, 0($sp)

	#pede coeficiente a
	li $v0, 4 #seta syscall para string
	la $a0, str_entre_a
	syscall
	
	#lÃª float e salva em a
	li $v0, 6
	syscall
	mov.s $f3, $f0 #salva em f3 porque usaremos f0 depois
	
	#pede coeficiente b
	li $v0, 4 
	la $a0, str_entre_b
	syscall	
	
	#lÃª float e salva em b
	li $v0, 6
	syscall
	mov.s $f1, $f0
	
	#pede coeficiente c
	li $v0, 4 
	la $a0, str_entre_c
	syscall	
	
	#lÃª float e salva em c
	li $v0, 6
	syscall
	mov.s $f2, $f0
	
	#move a para f0
	mov.s $f0, $f3 
		
	#restaura estado
	lw $a0, 4($sp)
	lw $v0, 0($sp)
	addi $sp, $sp, 8
	
	jr $ra
	
show_pol:
#recebe: a = f0, b = f1, c = f2
#faz: mostra polinÃ´mio
#altera registradores: nenhum
	#vamos usar a0 e v0, por isso salvamos na pilha
	#na verdade tambÃ©m vamos usar f12, ver como salvar isso na pilha depois
	addi $sp, $sp, -12
	sw $v0, 8($sp)
	sw $a0, 4($sp)	
	swc1 $f12, 0($sp)

	#imprime string de apresentaÃ§Ã£o
	li $v0, 4
	la $a0, str_1
	syscall
	
	#imprime a
	li $v0, 2 # para imprimir float que estÃ¡ em $f12
	mov.s $f12, $f0
	syscall
	
	#imprime string de x^2 +
	li $v0, 4
	la $a0, str_x2
	syscall	

	#imprime b
	li $v0, 2 
	mov.s $f12, $f1
	syscall	   

	#imprime string de x^1 +
	li $v0, 4
	la $a0, str_x1
	syscall	

	#imprime c
	li $v0, 2 
	mov.s $f12, $f2
	syscall	   
	
	#imprime string de x^0 +
	li $v0, 4
	la $a0, str_x0
	syscall	
	
	#imprime nova linha
	li $v0, 4
	la $a0, newl
	syscall	
	
	#restaura estado

	lw $v0, 8($sp)
	lw $a0, 4($sp)	
	lwc1 $f12, 0($sp)
	addi $sp, $sp, 8	
	
	jr $ra

	
calcula_raizes_grau_2:
#recebe: coeficientes a,b,c em f0,f1,f2 (single)
#faz: calcula raízes de p(x) = a*x^2 + b*x + c e coloca os valores na pilha (single)
#retorna: $a0: 1 se raízes reais, nesse caso os valores estão em 0(sp), 4(sp) 
#		2 se raÃ­zes complexas; nesse caso as raízes são 0(sp) + i*4(sp) e 8(sp) *i*12(sp)
#altera: a0
#utiliza: f0, f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12,f13,f14,f15,f16,f17, f30, f31

	addi $sp, $sp, -84
	sw	$ra, 80($sp)
	swc1	$f0, 76($sp)
	swc1	$f1, 72($sp)
	swc1	$f2, 68($sp)
	swc1	$f3, 64($sp)
	swc1	$f4, 60($sp)
	swc1	$f5, 56($sp)
	swc1	$f6, 52($sp)
	swc1	$f7, 48($sp)
	swc1	$f8, 44($sp)	
	swc1	$f9, 40($sp)
	swc1	$f10, 36($sp)
	swc1	$f11, 32($sp)
	swc1	$f12, 28($sp)
	swc1	$f13, 24($sp)
	swc1	$f14, 20($sp)
	swc1	$f15, 16($sp)
	swc1	$f16, 12($sp)
	swc1	$f17, 8($sp)
	swc1	$f30, 4($sp)
	swc1	$f31, 0($sp)
	
	# conversão para double
	cvt.d.s $f4, $f0 # f4 = (double)a
	cvt.d.s $f6, $f1 # f6 = (double)b
	cvt.d.s $f8, $f2 # f8 = (double)c
	
	#f10 = delta = b^2 - 4*a*c
	mov.d $f0, $f6
	jal square
	mov.d $f10, $f30 #f10 = b^2
	mul.d $f12, $f4, $f8 #f12 = a*c
	l.d   $f14, d_const4 
	mul.d $f12, $f12, $f14 #f12 = 4*a*c
	sub.d $f10, $f10, $f12 #f10 = b^2 - 4*a*c
	
	l.d $f14, d_const0
	c.lt.d $f10, $f14 # delta < 0?
		bc1t calcula_raizes_grau_2__delta_negativo
		bc1f calcula_raizes_grau_2__delta_nao_negativo
	
	#delta >= 0?
	calcula_raizes_grau_2__delta_nao_negativo:
		li $a0, 1
	
		#f10 = sqrt(delta)
		mov.d  $f0, $f10  
		jal positive_sqrt
		mov.d $f10, $f30  #f10 = sqrt(delta)
		
		#f10 = sqrt(delta)/(2*a)
		l.d $f14, d_const2
		mul.d $f14, $f14, $f4 #f14 = 2*a
		div.d $f10, $f10, $f14 #f10 = sqrt(delta)/(2*a)
		
		#f12 = -b/(2*a)
		l.d $f16, d_const_neg_1
		mul.d $f16, $f16, $f6 #f16 = -b
		div.d $f12, $f16, $f14 #f12 = -b/(2*a)
		
		#f0 = -b/(2*a) + sqrt(delta)/(2*a)
		add.d $f0, $f12, $f10
		
		#f2 = -b/(2*a) - sqrt(delta)/(2*a)
		sub.d $f2, $f12, $f10
		
		#converte resultado para single
		cvt.s.d $f0, $f0
		cvt.s.d $f2, $f2		
		
		#seta parte complexa 0
		l.s $f1, f_const0
		l.s $f3, f_const0		
	
		j calcula_raizes_grau_2__exit
	
	#delta < 0?
	calcula_raizes_grau_2__delta_negativo:
		li $a0, 2
	
		#f10 = -delta
		l.d $f12, d_const_neg_1
		mul.d $f10, $f10, $f12
		#f10 = sqrt(-delta)
		mov.d  $f0, $f10  
		jal positive_sqrt
		mov.d $f10, $f30  #f10 = sqrt(-delta)
		
		#f10 = sqrt(-delta)/(2*a)
		l.d $f14, d_const2
		mul.d $f14, $f14, $f4 #f14 = 2*a
		div.d $f10, $f10, $f14 #f10 = sqrt(-delta)/(2*a)
		
		#f12 = -b/(2*a)
		l.d $f16, d_const_neg_1
		mul.d $f16, $f16, $f6 #f16 = -b
		div.d $f12, $f16, $f14 #f12 = -b/(2*a)
				
		#f0 = f2 = Re(raiz)[single]
		cvt.s.d $f0, $f12
		cvt.s.d $f2, $f12

		#f1 = +Im(raiz)[single]
		cvt.s.d $f1, $f10	
		
		#f3 = -Im(raiz)[single]
		l.d $f14, d_const_neg_1 
		mul.d $f10, $f10, $f14 #f10 = -sqrt(-delta) 
		cvt.s.d $f3, $f10	
		j calcula_raizes_grau_2__exit
		
	calcula_raizes_grau_2__exit:

		#restaura estado
		lw	$ra, 80($sp)
		lwc1	$f4, 60($sp)
		lwc1	$f5, 56($sp)
		lwc1	$f6, 52($sp)
		lwc1	$f7, 48($sp)
		lwc1	$f8, 44($sp)	
		lwc1	$f9, 40($sp)
		lwc1	$f10, 36($sp)
		lwc1	$f11, 32($sp)
		lwc1	$f12, 28($sp)
		lwc1	$f13, 24($sp)
		lwc1	$f14, 20($sp)
		lwc1	$f15, 16($sp)
		lwc1	$f16, 12($sp)
		lwc1	$f17, 8($sp)
		lwc1	$f30, 4($sp)
		lwc1	$f31, 0($sp)
		addi $sp, $sp, 84
		
		#coloca resultados na pilha
		addi $sp, $sp, -16
		swc1 $f0, 0($sp)
		swc1 $f1, 4($sp)
		swc1 $f2, 8($sp)
		swc1 $f3, 12($sp)
		
		jr $ra	
	
	

mostra_raizes_grau_2:
#recebe: raÃ­zes em f0, f1, f2, f3; forma das raÃ­zes em a0
#faz: imprime raÃ­zes de acordo com o formato dado em a0
#retorna: nada
#altera: nada
	#strings dessa função
	#str_2	: .asciiz "As raízes do polinômio são: \n \t r1 = "
	#str_3	: .asciiz "r2 =  "
	#str_4	: .asciiz " + i* "
	
	#copiamos entrada para $t3
	move $t3, $a0
	
	#texto de entrada
	li $v0, 4
	la $a0, str_2
	syscall
	
	#decide qual modo de impressão baseado em a0
	li $t0, 1
	beq $t3, $t0, mostra_raizes_grau_2__raizes_reais
	li $t0, 2
	beq $t3, $t0, mostra_raizes_grau_2__raizes_complexas
	
	mostra_raizes_grau_2__raizes_reais:
	#carrega dados da pilha
	lwc1 $f0, 0($sp)
	lwc1 $f1, 4($sp)
	lwc1 $f2, 8($sp)
	lwc1 $f3, 12($sp)
	
	#mostra primeira raíz
	li $v0, 2
	mov.s $f12, $f0 
	syscall
	
	#\n\t
	li $v0, 4
	la $a0, newl
	syscall
	li $v0, 4
	la $a0, tab
	syscall
	
	#texto da segunda raíz
	li $v0, 4
	la $a0, str_3
	syscall

	#mostra segunda raíz
	li $v0, 2
	mov.s $f12, $f2 
	syscall

	#nova linha
	li $v0, 4
	la $a0, newl
	syscall	
	
	j mostra_raizes_grau_2__exit
	
	mostra_raizes_grau_2__raizes_complexas:
	#mostra Re da primeira raíz
	li $v0, 2
	mov.s $f12, $f0 
	syscall
	
	#texto de Im da primeira raiz
	li $v0, 4
	la $a0, str_4
	syscall
	
	#mostra Im da primeira raíz
	li $v0, 2
	mov.s $f12, $f1 
	syscall
	
	#\n\t
	li $v0, 4
	la $a0, newl
	syscall
	li $v0, 4
	la $a0, tab
	syscall
	
	#texto da segunda raíz
	li $v0, 4
	la $a0, str_3
	syscall

	#mostra Re da segunda raíz
	li $v0, 2
	mov.s $f12, $f2 
	syscall
	
	#texto de Im da segunda raiz
	li $v0, 4
	la $a0, str_4
	syscall
	
	#mostra Im da segunda raíz
	li $v0, 2
	mov.s $f12, $f3
	syscall

	#nova linha
	li $v0, 4
	la $a0, newl
	syscall	
	
	j mostra_raizes_grau_2__exit
	
	mostra_raizes_grau_2__exit:
	
	jr $ra
	
	

positive_sqrt:
#calcula a raÃ­z quadrada de um nÃºmero positivo pelo mÃ©todo da bisseÃ§Ã£o
#L = f2; M = f4, R = f6 (double)
#recebe x = f0	
#utiliza f0, f2, f4, f6, f8, f10, t0, t1, ra
#restaura todo o estado a excessão de f0,f1,f30 e f31
#retorna sqrt(X) em f30(double)


	addi $sp, $sp, -52
	sw   $ra, 48($sp)
	sw   $t0, 44($sp)
	sw   $t1, 40($sp)
	swc1 $f2, 36($sp)
	swc1 $f3, 32($sp)
	swc1 $f4, 28($sp)
	swc1 $f5, 24($sp)
	swc1 $f6, 20($sp)
	swc1 $f7, 16($sp)
	swc1 $f8, 12($sp)
	swc1 $f9, 8($sp)
	swc1 $f10, 4($sp)
	swc1 $f11, 0($sp)
	
	#guarda argumento de entrada em f8
	mov.d $f10, $f0
	
	#t0 = i = 0
	li $t0, 0
	
	#L = 0;
	l.d $f2, d_const0

	#R = x	
	mov.d $f6, $f0

	positive_sqrt__for1: #for(i=0; i < 100; i++)
		li $t1, 100
		beq $t0, $t1, positive_sqrt__exit #sai se i==100
		addi $t0, $t0, 1 #i++
	
		#f4 = M = (L+R)*0.5
		add.d $f4, $f2, $f6	
		l.d $f8, d_const05
		mul.d $f4, $f4, $f8
	
		#calcula M^2 em f30
		mov.d $f0, $f4
		jal square
	
		#M^2 == x? se sim, retorna M
		c.eq.d $f30, $f10
		bc1t	positive_sqrt__exit

		#se M^2 < x => L = M
		#se M^2 > x => R = M
		c.lt.d $f30, $f10
			bc1t	positive_sqrt__for1_case_1
			bc1f	positive_sqrt__for1_case_2
		

		#se M^2 > x => D = M
		positive_sqrt__for1_case_1:
			mov.d $f2, $f4
			j positive_sqrt__for1		
		positive_sqrt__for1_case_2:
			mov.d $f6, $f4
			j positive_sqrt__for1
		
	positive_sqrt__exit:
	#retorna M = f4 em f30
	mov.d $f30, $f4
	
	#restaura estado 
	lw   $ra, 48($sp)
	lw   $t0, 44($sp)
	lw   $t1, 40($sp)
	lwc1 $f2, 36($sp)
	lwc1 $f3, 32($sp)
	lwc1 $f4, 28($sp)
	lwc1 $f5, 24($sp)
	lwc1 $f6, 20($sp)
	lwc1 $f7, 16($sp)
	lwc1 $f8, 12($sp)
	lwc1 $f9, 8($sp)
	lwc1 $f10, 4($sp)
	lwc1 $f11, 0($sp)
	addi $sp, $sp, 52

	jr $ra
square:
#recebe x(double) em f0 e retorna x^2 em f30
	mul.d $f30, $f0, $f0
	jr $ra 	


exit_program:
	li $v0, 10
	syscall	
			
