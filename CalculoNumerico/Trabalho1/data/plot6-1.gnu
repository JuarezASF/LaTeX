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
set output '6-1.tex'

set ylabel norotate

set xlabel 't' norotate

set notitle

set xrange [0:100]

plot erfc(1/x) t 'erfc$(k/t)$' lt 1, exp(-1/x) t '\hspace{1 cm}$e^{-k/t}$' lt 2


! mv '6-1.eps' ./../graph/
! mv '6-1.tex' ./../graph/


