set terminal epslatex size 14cm,10cm #color colortext 'phv,9' header '\definecolor{t}{rgb}{0.5,0.5,0.5}'

# ------------------------------------
# ------------------------------------
# ------------DEFININDO ESTILOS-------
# ------------------------------------
# ------------------------------------
set key box bottom

set key right

# ------------------------------------
# ------------------------------------
# Temperatura versus resistência
# ------------------------------------
# ------------------------------------

set output "graph-calibration.tex"

set xlabel 'Temperatura(ºC)' 
set ylabel 'Voltagem V' 

set title 'Calibração Estática de Termopar'

m = 0.04
b = -0.5
#comprimento de onda

f(x) = m*x + b

fit f(x) './../data/calibration.dat' u 1:2 via m, b

#equation = sprintf("\\sin(\\theta) = (%.7f \\pm %.7f)\\frac{1}{d}", a,a_err)
#set print 'eq-1.tex'
#print equation

plot './../data/calibration.dat' u 1:2 w points lw 6 lt 6 lc 0 t 'data',\
 f(x) t 'regressão linear' w lines lw 6

! mv './graph-calibration.eps' ./../images/
! mv './graph-calibration.tex' ./../images/
#! mv './eq-1.tex' ./../equation/


