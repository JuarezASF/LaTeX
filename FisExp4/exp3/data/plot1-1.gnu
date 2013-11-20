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

set output "1-1.tex"

set xlabel 'm' 
set ylabel 'T(m)' norotate

set logscale y

set notitle

plot './1-1.dat' u 1:3 w lines ls 1 t 'T(m)', './1-1.dat' u 1:3:($3*0.05) w errorbars t '' lt 1

! mv '1-1.eps' ./../graph/
! mv '1-1.tex' ./../graph/

# ------------------------------------
# ------------------------------------
# ------------PLOTANDO FITTADOS-------
# ------------------------------------
# ------------------------------------


set output "1-1-fitted.tex"

m = 2

f(x) = m**x
#T(m) = T^m

set fit logfile '1-1-fit.log'

fit f(x) './1-1.dat' using 1:3 via m

EqFitted = sprintf("T(m) = %.3f^m", m)

n = 0.5

g(x) = n**x

fit g(x) './1-2.dat' using 1:3 via n

EqFitted2 = sprintf("T'(m) = %.3f^m", n)

set print 'eq:1-1.tex'
print EqFitted
set print 'eq:1-2.tex'
print EqFitted2

set notitle

set ylabel 'T(m)' 

set xrange [0: 6]

unset logscale

plot f(x) t 'T(m)' lw 2 , './1-1.dat' u 1:3 w points t 'dados' lt 6#, './1-2.dat' u 1:3 w points t 'dados $T_2$(m)' lt 5, g(x) t '$T_2$(m)' lw 5

! mv '1-1-fitted.eps' ./../graph/
! mv '1-1-fitted.tex' ./../graph/
! rm '1-1-fit.log'
!mv eq:1-1.tex ./../equation/
!mv eq:1-2.tex ./../equation/
# ------------------------------------
# ------------------------------------
# ------------PLOTANDO FITTADOS em x-------
# ------------------------------------
# ------------------------------------


set output "1-1-fitted2.tex"

a = 280

b = 1

f(x) = a*exp(-1.0*b*x)

fit f(x) './1-1.dat' using ($1 * 3):2 via a, b

EqFitted2 = sprintf("I(x) =%.3f e^{-%.3f x}", a, b)

set print 'eq:1-1-2.tex'
print EqFitted2

set notitle

set ylabel 'I(x)' 

set xlabel 'x'

set xrange [0: 18]

unset logscale

plot f(x) t '' lw 2 , './1-1.dat' u ($1 * 3):2 w points t 'dados' lt 6

! mv '1-1-fitted2.eps' ./../graph/
! mv '1-1-fitted2.tex' ./../graph/
! rm '1-1-fit.log'
! mv eq:1-1-2.tex ./../equation/
