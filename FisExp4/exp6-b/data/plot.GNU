set terminal epslatex size 14cm,10cm color colortext 'phv,9'	header '\definecolor{t}{rgb}{0.5,0.5,0.5}'

  
 set style line 1 lt 1 lw 6 lc rgb 'red' 
 set style line 2 lt 1 lw 6 lc rgb 'dark-green'
 set style line 3 lt 1 lw 6 lc rgb 'blue'
 set style line 4 lt 1 lw 6 lc rgb 'orange'
 set style line 5 lt 1 lw 6 lc rgb 'orange'
 set style line 6 lt 1 lw 6 lc rgb 'yellow'
 set style line 7 lt 1 lw 6 lc rgb 'green'
 set style line 8 lt 1 lw 6 lc rgb 'sea-green'
 set style line 9 lt 1 lw 6 lc rgb 'blue'
 set style line 10 lt 1 lw 6 lc rgb 'dark-blue'
 set style line 11 lt 1 lw 6 lc rgb 'black'
 set style line 12 lt 1 lw 6 lc rgb 'purple'
  

set title "$\\triangle s$ em função da frequência"
 set xlabel 'frequência(rad/s)' 
 set ylabel '$\triangle s (cm)$' norotate 

f(x) = a*x + b

set fit errorvariables

fit f(x) './dataA.dat' u ($1*2*3.14159):(abs($2 - 1.0575)) via a,b


EqFitA = sprintf("\\triangle s' = (%.8f \\pm %.8f)\\omega+(%.4f \\pm %.4f)", a, a_err, b, b_err)

set print './../equation/EqFitA.tex

print EqFitA

set output "./../graph/graphA.tex"

set key left

plot 'dataA.dat' using ($1*2*3.14159):(abs($2 - 1.0575)) w points lt 6 lw 4 lc 0 t 'dados', \
f(x) with lines ls 11 t 'regressão' 
