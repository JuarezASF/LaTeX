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
 set output "./../LaTeX/graph/quest1-a.tex" 
set title 'Ajuste Polinomial' 
plot (5.449155931 * x**0 + -1.819039159 * x**1) w lines ls 1 t '$y_{1}(t)$',  (8.706067172 * x**0 + -12.104022023 * x**1 + 5.713879369 * x**2) w lines ls 2 t '$y_{2}(t)$', (11.099894728 * x**0 + -26.103013582 * x**1 + 24.612517973 * x**2 + -6.999495779 * x**3) w lines ls 3 t '$y_{3}(t)$','./../data/tab1.dat' u 1:2 w points t 'data points' lt 6 lc 0 lw 3  
 
