set term epslatex size 8cm,6cm #color colortext 'phv,9' header '\definecolor{t}{rgb}{0.5,0.5,0.5}'

set output 'intro-fig01.tex'

set xrange [0:6]
set xlabel 'tempo'

set yrange [-1.1:1.1]
set ylabel '$\psi(\utilde{x_0}, t)$' norotate

plot sin(x) t '$\psi_1$' lt 1 lw 6, -0.5*sin(x) t '$\psi_2$' lt 2 lw 6 , sin(x)-0.5*sin(x) t '$\psi_t$' lt 6 lw 6 lc 0.2

set output 'intro-fig02.tex'
plot 0.5*sin(x) t '$\psi_1$' lt 1 lw 6, 0.6*sin(x) t '$\psi_2$' lt 2 lw 6 , 0.5*sin(x)+0.6*sin(x) t '$\psi_t$' lt 6 lw 6 lc 0.2
