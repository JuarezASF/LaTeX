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
set output '9-1.tex'

set ylabel '$t^*$'norotate

set xlabel '$q$' norotate

set notitle

set xrange [1:10]

plot  './9-1.dat' u 1:2 w linespoints lt 4 lc 0 t '$t^*(q)$'


! mv '9-1.eps' ./../graph/
! mv '9-1.tex' ./../graph/

# ------------------------------------
# ------------	PLOTANDO 8-1	-------
# ------------------------------------
# ------------------------------------
set output '9-2.tex'

set ylabel '$t^*$'norotate

set xlabel '$\alpha$' norotate

set notitle

set xrange [1:10]

plot  './9-2.dat' u 1:2 w linespoints lt 4 lc 0 t '$t^*(\alpha)$'


! mv '9-2.eps' ./../graph/
! mv '9-2.tex' ./../graph/
