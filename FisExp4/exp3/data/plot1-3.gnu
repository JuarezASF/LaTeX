set terminal epslatex size 14cm,10cm #color colortext 'phv,9' header '\definecolor{t}{rgb}{0.5,0.5,0.5}'

# ------------------------------------
# ------------------------------------
# ------------DEFININDO ESTILOS-------
# ------------------------------------
# ------------------------------------
#set style line 11 lc rgb '#808080' lt 1
#set border 3 front ls 11

# define grid
#set style line 12 lc rgb'#808080' lt 0 lw 1
#set grid back ls 12

# color definitions
#set style line 1 lc rgb '#8b1a0e' pt 1 ps 1.5 lt 1 lw 5 # --- red
#set style line 2 lc rgb '#5e9c36' pt 6 ps 1.5 lt 1 lw 5 # --- green
#set style line 3 lc rgb '#00008B' pt 6 ps 1.5 lt 1 lw 5 # --- dark blue

set key box center top 

# ------------------------------------
# ------------------------------------
# ------------PLOTANDO DADOS NORMAIS--
# ------------------------------------
# ------------------------------------

set output "1-3.tex"

set xlabel 'm' 
set ylabel "$log(\\frac{T(m)}{T'(m)}$)"
set ylabel norotate

set logscale y

set notitle

plot './1-3.dat' u 1:2 w lines ls 1 t 'T', './1-3.dat' u 1:2:($2*0.05) w errorbars t '' lt 1

! mv '1-3.eps' ./../graph/
! mv '1-3.tex' ./../graph/

# ------------------------------------
# ------------------------------------
# ------------PLOTANDO FITTADOS-------
# ------------------------------------
# ------------------------------------


set output "1-3-fitted.tex"

a = 0.2

b = 1

f(x) = a*x + b
#log(T/T' (m)) = 2*(log(1 - R) m - 2log(1- R)

set fit logfile '1-3-fit.log'

fit f(x) './1-3.dat' using 1:(log($2)) via a,b

EqFitted = sprintf("log (\\frac{T(m)}{T'(m)}) = %.3f \\cdot m + (%.3f)", a, b)

set print 'eq:1-3.tex'
print EqFitted

set notitle

set xrange [0: 6]

unset logscale

plot f(x) lw 2 t '', './1-3.dat' u 1:(log($2)) w points lt 6 t 'dados'

! mv '1-3-fitted.eps' ./../graph/
! mv '1-3-fitted.tex' ./../graph/
! rm '1-3-fit.log'
!mv eq:1-3.tex ./../equation/
