set terminal epslatex size 10cm,7cm color colortext 'phv,9' header '\definecolor{t}{rgb}{0.5,0.5,0.5}'
# ------------------------------------
# ------------------------------------
# ------------DEFININDO ESTILOS-------
# ------------------------------------
# ------------------------------------
#set style line 11 lc rgb '#808080' lt 1
#set border 3 front ls 11




# ------------------------------------
# ------------	PLOTANDO 4-1	-------
# ------------------------------------
# ------------------------------------
set output '4-1.tex'

set ylabel '$k$' norotate

set xlabel '$\lambda$' norotate

set title 'k vs. $\lambda$ : baixos períodos'

set xrange [0:3.5]

#plot  './4-1.dat' u 1:2 w points lt 5 lw 0.01 lc 0 t''
plot './4-1.dat' u 1:2 w points lt 6 lc 0 t '', './4-1.dat' u 1:2 w lines t '' lc 0
! mv '4-1.eps' ./../graph/
! mv '4-1.tex' ./../graph/

# ------------------------------------
# ------------	PLOTANDO 4-2	-------
# ------------------------------------
# ------------------------------------
set output '4-2.tex'

set title 'k vs. $\lambda$ : altos períodos'

set xrange [3.5: 4]

#plot  './4-1.dat' u 1:2 w points lt 5 lw 0.01 lc 0 t ''
plot './4-1.dat' u 1:2 w points lt 6 lc 0 t '', './4-1.dat' u 1:2 w lines t '' lc 0
! mv '4-2.eps' ./../graph/
! mv '4-2.tex' ./../graph/

# ------------------------------------
# ------------	PLOTANDO 4-3	-------
# ------------------------------------
# ------------------------------------
set terminal epslatex size 12cm,8cm color colortext 'phv,9' header '\definecolor{t}{rgb}{0.5,0.5,0.5}'
set output '4-3.tex'

set title 'Frequênia dos Períodos'

set xrange [2: 100]

set yrange [0: 120]

set xlabel 'k'

set ylabel 'f(k)' norotate

plot './4-2.dat' u 1:2 w points lt 6 lc 0 t '', './4-2.dat' u 1:2 w lines t '' lc 0

! mv '4-3.eps' ./../graph/
! mv '4-3.tex' ./../graph/

