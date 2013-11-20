set terminal epslatex size 10cm,7cm #color colortext 'phv,9' header '\definecolor{t}{rgb}{0.5,0.5,0.5}'
# ------------------------------------
# ------------------------------------
# ------------DEFININDO ESTILOS-------
# ------------------------------------
# ------------------------------------
#set style line 11 lc rgb '#808080' lt 1
#set border 3 front ls 11


# ------------------------------------
# ------------	PLOTANDO 10-1	-------
# ------------------------------------
# ------------------------------------
set output '10-1.tex'

set xlabel '$n$'norotate

set ylabel '$|\frac{t^{(n)} - t^*}{t^*}|$' norotate

set notitle

set yrange [0:0.6]

plot './10-1.dat' u 1:2 w lines lt 1 lw 6 t 'Newton-Raphson', './10-2.dat' u 1:2 w lines lt 2 lw 6 t 'Bisseção', 1/(x*x) t '$\frac{1}{n^2}$' lt 3 lw 6


! mv '10-1.eps' ./../graph/
! mv '10-1.tex' ./../graph/


