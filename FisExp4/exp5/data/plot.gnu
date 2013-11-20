set terminal epslatex size 14cm,10cm #color colortext 'phv,9' header '\definecolor{t}{rgb}{0.5,0.5,0.5}'

# ------------------------------------
# ------------------------------------
# ------------DEFININDO ESTILOS-------
# ------------------------------------
# ------------------------------------
set key box center top

set fit errorvariables

set key left 

# ------------------------------------
# ------------------------------------
# PRECEDIMENTOS 1 - DISTÂNCIA EM FUNÇÃO DE NÚMERO DE FRANJAS
# ------------------------------------
# ------------------------------------

set output "graph-fenda-dupla.tex"

set xlabel '$\frac{1}{d}(\frac{1}{m})$' 
set ylabel '$\sin \theta$' norotate

set title '$\sin \theta vs \frac{1}{d}$'

a = 1e-6  
#comprimento de onda

f(x) = a*x

fit f(x) 'fenda-dupla.dat' u 1:2 via a

equation = sprintf("\\sin(\\theta) = (%.7f \\pm %.7f)\\frac{1}{d}", a,a_err)

set print 'eq-1.tex'

print equation

plot './fenda-dupla.dat' u 1:2:(0.0002) w yerrorbars lw 6 lt 6 lc 0 t 'data',\
 f(x) t 'regressão' w lines lw 6


! mv './graph-fenda-dupla.eps' ./../graph/
! mv './graph-fenda-dupla.tex' ./../graph/
! mv './eq-1.tex' ./../equation/


