	#salva pilha 
	#.
	#.
	#.
	
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
		bc1t _delta_negativo
		bc1f _delta_nao_negativo
	
	#delta >= 0?
		_delta_nao_negativo:
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
		_delta_negativo:
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
	#restaura pilha 
	#.
	#.
	#.
	#coloca resultados na pilha
		addi $sp, $sp, -16
		swc1 $f0, 0($sp)
		swc1 $f1, 4($sp)
		swc1 $f2, 8($sp)
		swc1 $f3, 12($sp)
		
		jr $ra	
	