set terminal epslatex size 14cm,10cm color colortext 'phv,9'	header '\definecolor{t}{rgb}{0.5,0.5,0.5}'
set xlabel 't' 
 set ylabel 'y(t)' norotate 
 
 set key center bottom 
 set style line 1 lt 1 lw 3 lc rgb 'red' 
 set style line 2 lt 1 lw 3 lc rgb 'dark-red'
 set style line 3 lt 1 lw 3 lc rgb 'gray'
 set style line 4 lt 1 lw 3 lc rgb 'yellow'
 set style line 5 lt 1 lw 6 lc rgb 'orange'
 set style line 6 lt 1 lw 6 lc rgb 'yellow'
 set style line 7 lt 1 lw 6 lc rgb 'green'
 set style line 8 lt 1 lw 6 lc rgb 'sea-green'
 set style line 9 lt 1 lw 6 lc rgb 'blue'
 set style line 10 lt 1 lw 6 lc rgb 'dark-blue'
 set style line 11 lt 1 lw 6 lc rgb 'black'
 set key outside 
 
set output "./../LaTeX/graph/quest1.tex" 
set title 'Fitting Polinomial várias ordens' 
plot (5.4492 * x**0 + -1.8190 * x**1) w lines ls 1 t '$y(t) = 5.4492 t^{0} + -1.8190 t^{1}$',  (8.7061 * x**0 + -12.1040 * x**1 + 5.7139 * x**2) w lines ls 2 t '$y(t) = 8.7061 t^{0} + -12.1040 t^{1} + 5.7139 t^{2}$',  (11.0999 * x**0 + -26.1030 * x**1 + 24.6125 * x**2 + -6.9995 * x**3) w lines ls 3 t '$y(t) = 11.0999 t^{0} + -26.1030 t^{1} + 24.6125 t^{2} + -6.9995 t^{3}$',  (9.8823 * x**0 + -8.7341 * x**1 + -44.8161 * x**2 + 102.1152 * x**3 + -72.6298 * x**4 + 17.1504 * x**5) w lines ls 4 t '$y(t) = 9.8823 t^{0} + -8.7341 t^{1} + -44.8161 t^{2} + 102.1152 t^{3} + -72.6298 t^{4} + 17.1504 t^{5}$', (-41.3815 * x**0 + 1116.0543 * x**1 + -9137.6435 * x**2 + 37257.9795 * x**3 + -87894.0345 * x**4 + 128680.6519 * x**5 + -120650.8969 * x**6 + 72604.1978 * x**7 + -27166.6939 * x**8 + 5766.7080 * x**9 + -532.0685 * x**10) w lines ls 5 t '$y(t) = -41.3815 t^{0} + 1116.0543 t^{1} + -9137.6435 t^{2} + 37257.9795 t^{3} + -87894.0345 t^{4} + 128680.6519 t^{5} + -120650.8969 t^{6} + 72604.1978 t^{7} + -27166.6939 t^{8} + 5766.7080 t^{9} + -532.0685 t^{10}$','./../data/tab1.dat' u 1:2 w points t 'data points' lt 6 lc 0 lw 6  
 
 ! mv '././../LaTeX/graph/quest1.eps' ./images 
 ! mv '././../LaTeX/graph/quest1.tex' ./images