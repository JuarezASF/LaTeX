set terminal epslatex size 10cm,7cm color colortext 'phv,9' header '\definecolor{t}{rgb}{0.5,0.5,0.5}'
# ------------------------------------
# ------------------------------------
# ------------DEFININDO ESTILOS-------
# ------------------------------------
# ------------------------------------
#set style line 11 lc rgb '#808080' lt 1
#set border 3 front ls 11


# ------------------------------------
# ------------	PLOTANDO 8-1	-------
# ------------------------------------
# ------------------------------------
set output '8-1.tex'

set ylabel '$t^*$'norotate

set xlabel '$x_0$' norotate

set notitle

set xrange [1:5]

plot  './8-1.dat' u 1:2 w linespoints lt 4 lc 0 t ''


! mv '8-1.eps' ./../graph/
! mv '8-1.tex' ./../graph/
# ------------------------------------
# ------------	FITTING 8-1	-------
# ------------------------------------
# ------------------------------------
h(x) = e*x + f

e = 50

f=1320

fit h(x) './8-1.dat' using 1:2 via e, f

equation3 = sprintf("t^*(x_0) =  %.2f x_0  + %.2f ", e, f)

set print 'eq:8-1.tex'
print equation3

! mv 'eq:8-1.tex' ./../graph/
# ------------------------------------
# ------------	PLOTANDO 8-2	-------
# ------------------------------------
# ------------------------------------
set output '8-2.tex'

f(x) = a*x + b

a = 50

b=1320

fit f(x) './8-2.dat' using 1:3 via a, b

equation = sprintf("t^*(x_0)_{T_f = 60} =  %.2f x_0  + %.2f ", a, b)

set print 'eq:8-2.tex'
print equation

g(x) = c*x + d

c = 50

d=1320

fit g(x) './8-2.dat' using 1:4 via c, d

equation2 = sprintf("t^*(x_0)_{T_f = 70} =  %.2f x_0  + %.2f ", c, d)

set print 'eq:8-3.tex'
print equation2

! mv 'eq:8-2.tex' ./../graph/
! mv 'eq:8-3.tex' ./../graph/

set xrange[0:10]


plot './8-2.dat' u 1:2 w points lc 0 t '$T_f = 50$', './8-2.dat' u 1:3 w points lt 2 t '$T_f = 60$', './8-2.dat' u 1:4 w points lt 3 t '$T_f = 70$', f(x) t '', g(x) t '', h(x) t '' lc 0



! mv '8-2.eps' ./../graph/
! mv '8-2.tex' ./../graph/


