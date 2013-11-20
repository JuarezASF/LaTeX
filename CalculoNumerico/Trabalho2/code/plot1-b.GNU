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
 set output "./../LaTeX/graph/quest1-b.tex" 
set title 'Ajuste Polinomial' 
plot (9.882274745 * x**0 + -8.734146392 * x**1 + -44.816147647 * x**2 + 102.115154489 * x**3 + -72.629832874 * x**4 + 17.150403161 * x**5) w lines ls 1 t '$y_{5}(t)$', (-41.381469188 * x**0 + 1116.054323205 * x**1 + -9137.643465202 * x**2 + 37257.979486406 * x**3 + -87894.034518301 * x**4 + 128680.651906073 * x**5 + -120650.896942317 * x**6 + 72604.197820485 * x**7 + -27166.693946347 * x**8 + 5766.707958695 * x**9 + -532.068528481 * x**10) w lines ls 2 t '$y_{10}(t)$','./../data/tab1.dat' u 1:2 w points t 'data points' lt 6 lc 0 lw 3  
 
