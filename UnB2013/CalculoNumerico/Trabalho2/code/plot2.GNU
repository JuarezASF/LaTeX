set terminal epslatex size 14cm,10cm color colortext 'phv,9'	header '\definecolor{t}{rgb}{0.5,0.5,0.5}'
set xlabel 't' 
 set ylabel 'y(t)' norotate 
 
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
 
 set samples 1000 
 set output "./../LaTeX/graph/quest2.tex" 
set title 'Ajuste Polinomial' 
plot(178876.614572241 * x**0 + -5959122.481051552 * x**1 + 85139869.339378893 * x**2 + -703381535.014488101 * x**3 + 3801950682.836699486 * x**4 + -14372312325.036849976 * x**5 + 39551911482.923011780 * x**6 + -81234349430.621322632 * x**7 + 126366125611.337051392 * x**8 + -149897790486.891510010 * x**9 + 135543186661.388427734 * x**10 + -92683170686.072357178 * x**11 + 47087449878.085258484 * x**12 + -17216392160.455154419 * x**13 + 4279737925.810716629 * x**14 + -647252870.234843969 * x**15 + 44927628.590379730 * x**16) w lines ls 1 t '$y_{16}(t)$','./../data/tab1.dat' u 1:2 w points t 'data points' lt 6 lc 0 lw 3  
 
