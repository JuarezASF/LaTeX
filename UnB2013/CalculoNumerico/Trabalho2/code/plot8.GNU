set terminal epslatex size 14cm,10cm color colortext 'phv,9'	header '\definecolor{t}{rgb}{0.5,0.5,0.5}'
set xlabel 't' 
 set ylabel '$\kappa(t)$' norotate 
 
 set key center bottom 
 set style line 1 lt 1 lw 3 lc rgb 'red' 
 set style line 2 lt 1 lw 3 lc rgb 'dark-green'
 set style line 3 lt 1 lw 3 lc rgb 'blue'
 set style line 4 lt 1 lw 3 lc rgb 'orange'
 set style line 5 lt 1 lw 6 lc rgb 'orange'
 set style line 6 lt 1 lw 6 lc rgb 'yellow'
 set style line 7 lt 1 lw 6 lc rgb 'green'
 set style line 8 lt 1 lw 6 lc rgb 'sea-green'
 set style line 9 lt 1 lw 6 lc rgb 'blue'
 set style line 10 lt 1 lw 6 lc rgb 'dark-blue'
 set style line 11 lt 1 lw 6 lc rgb 'black'
 set key outside 
 
  set output "./../LaTeX/graph/quest8.tex" 
set title 'Curvatura do ajuste com splines'

set yrange [0:11]
plot './quest8-curvature.dat' u 1:2 w lines ls 2 t '$\kappa (t)$', './quest7-split.dat' u 1:2 w lines ls 3 t 'splines', './../data/tab1.dat' u 1:2 w points t 'data points' lt 6 lc 0 lw 3
 
