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
set output '6-2.tex'

set ylabel 'n'norotate

set xlabel '$t_0$' norotate

set notitle

set xrange [1000:15000]

set yrange [0: 10]

plot  './6-2.dat' u 1:2 w linespoints lt 4 lc 0 t ''


! mv '6-2.eps' ./../graph/
! mv '6-2.tex' ./../graph/


