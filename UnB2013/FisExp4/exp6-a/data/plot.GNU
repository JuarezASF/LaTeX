set terminal epslatex size 12cm,8cm color colortext 'phv,9'	header '\definecolor{t}{rgb}{0.5,0.5,0.5}'

  
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
  
 
set output "./../graph/graphA.tex"

set title "$V_{max}$ em função da intensidade incidente"
 set xlabel 'intensidade(\%)' 
 set ylabel '$V_{máx}$' norotate 

plot 'dataA.dat' using 1:2 w linespoints lt 6 lc rgb \
'purple' lw 6 t 'ultravioleta', \
'dataA.dat' u 1:3 w linespoints lt 6 lc rgb 'blue' lw 6 t '1º azul',\
'dataA.dat' u 1:4 w linespoints lt 6 lc rgb 'dark-blue' lw 6 t '2º azul',\
'dataA.dat' u 1:6 w linespoints lt 6 lc rgb 'green' lw 6  t 'verde',\
'dataA.dat' u 1:7 w linespoints lt 6 lc rgb 'yellow' lw 6 t 'amarelo'


set title '$V_{max}$ em função da frequência incidente'
 set xlabel 'frequência(Hz)' 
 set ylabel '$V_{máx}$' norotate 

f(x) = a*x - b

set fit errorvariables

a = 3e-15

b = 1


fit f(x) 'dataB.dat' u 1:2 via a, b

EqFitB = sprintf("V_{máx} = (%.16f \\pm %.16f) \\nu - (%.1f \\pm %.1f)", a, a_err, b, b_err)

set print './../equation/EqFitB.tex

print EqFitB

set output "./../graph/graphB.tex"

set key left

plot 'dataB.dat' using 1:2 w points lt 6 lw 4 lc 0 t 'dados', \
f(x) with lines ls 11 t 'regressão' 
