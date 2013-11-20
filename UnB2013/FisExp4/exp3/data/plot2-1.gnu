set terminal epslatex size 14cm,10cm #color colortext 'phv,9' header '\definecolor{t}{rgb}{0.5,0.5,0.5}'

# ------------------------------------
# ------------------------------------
# ------------DEFININDO ESTILOS-------
# ------------------------------------
# ------------------------------------
#set style line 11 lc rgb '#808080' lt 1
#set border 3 front ls 11

# define grid
#set style line 12 lc rgb'#808080' lt 0 lw 1
#set grid back ls 12

# color definitions
#set style line 1 lc rgb '#8b1a0e' pt 1 ps 1.5 lt 1 lw 5 # --- red
#set style line 2 lc rgb '#5e9c36' pt 6 ps 1.5 lt 1 lw 5 # --- green
#set style line 3 lc rgb '#00008B' pt 6 ps 1.5 lt 1 lw 5 # --- dark blue

set key box center top 

# ------------------------------------
# ------------------------------------
# ------------PLOTANDO DADOS NORMAIS--
# ------------------------------------
# ------------------------------------

set output "2-1.tex"

set xlabel 'x(cm)' 
set ylabel "$I(x)$)"
set ylabel norotate

set notitle

plot './2-1.dat' u 1:2 w lines ls 1 t '$I_1(x)$', './2-1.dat' u 1:2:($2*0.05) w errorbars t '' lt 1, './2-1.dat' u 1:3 w lines ls 1 t '$I_2(x)$', './2-1.dat' u 1:3:($3*0.05) w errorbars t '' lt 1

! mv '2-1.eps' ./../graph/
! mv '2-1.tex' ./../graph/

# ------------------------------------
# ------------------------------------
# ------------PLOTANDO FITTADOS-------
# ------------------------------------
# ------------------------------------


set output "2-1-fitted.tex"

a = 3000000

b = -2.2

f(x) = a*x**(b)

set fit logfile '2-1-fit.log'

fit f(x) './2-1.dat' using 1:2 via a,b

EqFitted = sprintf("I_1(x) = %.0f \\cdot x ^{%.3f}", a, b)

c = 3000000

d = -1.7

g(x) = c*(x - e)**(d) 


fit g(x) './2-1.dat' using 1:3 via c,d, e

EqFitted_2 = sprintf("I_2(x) = %.3f \\cdot (x - (%.3f)) ^{%.3f} ", c, e, d)



h(x) = A*exp(-1.0*B*x)

A = 35000

B = 0.1

fit h(x) './2-1.dat' using 1:2 via A, B

EqFitted_3 = sprintf("I_1(x) = %.3f \\cdot e^{-%.3f x} ", A, B)


l(x) = C*exp(-1.0*D*x)

C = 35000

D = 0.1

fit l(x) './2-1.dat' using 1:3 via C, D

EqFitted_4 = sprintf("I_2(x) = %.3f \\cdot e^{-%.3f x} ", C, D)



set print 'eq:2-1.tex'
print EqFitted
set print 'eq:2-2.tex'
print EqFitted_2
set print 'eq:2-3.tex'
print EqFitted_3
set print 'eq:2-4.tex'
print EqFitted_4


set notitle

set xrange [10: 70]

unset logscale

plot f(x) lw 2 lt 2 t 'decaimento quadrático para 1' , g(x) lw 3 lt 2 t 'decaimento quadrático para 2' , './2-1.dat' u 1:2 w points lt 6 t 'dados $I_1(x)$: sem colimador','./2-1.dat' u 1:2:($2*0.05) w errorbars t '' lt 1, './2-1.dat' u 1:3 w points lt 7 t 'dados $I_2(x)$: com colimador','./2-1.dat' u 1:3:($3*0.05) w errorbars t '' lt 1, h(x) t 'decaimento exponencial para 1' lw 4 lt 1, l(x) t 'decaimento exponencial para 2' lw 4 lt 1

! mv '2-1-fitted.eps' ./../graph/
! mv '2-1-fitted.tex' ./../graph/
! rm '2-1-fit.log'
! mv eq:2-1.tex ./../equation/
! mv eq:2-2.tex ./../equation/
! mv eq:2-3.tex ./../equation/
! mv eq:2-4.tex ./../equation/
