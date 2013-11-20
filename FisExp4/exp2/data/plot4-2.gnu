set terminal epslatex size 14cm,9cm #color colortext 'phv,9' header '\definecolor{t}{rgb}{0.5,0.5,0.5}'

set output "4-2.eps"

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
set xlabel '$\theta(º)$' 
set ylabel 'luminosidade' 

set notitle

plot './4-2.dat' u 1:2 w lines t 'placa $\frac{\lambda}{4}$ em 0º', './4-2.dat' u 1:2:($2*0.05) w errorbars t '' lt 1,  './4-2.dat' u 1:3 w lines t '              em 90º', './4-2.dat' u 1:3:($3*0.05) w errorbars t '' lt 1,   './4-2.dat' u 1:4 w lines t 'polarizador em 45º', './4-2.dat' u 1:4:($4*0.05) w errorbars t '' lt 1

!mv '4-2.eps' ./../graph/
!mv '4-2.tex' ./../graph/

# ------------------------------------
# ------------------------------------
# ------------PLOTANDO FITTADOS-------
# ------------------------------------
# ------------------------------------


set output "4-2-fitted.tex"

a = 1

b = 35

c = 5

f(x) = a + b*cos(pi*(x - c)/180)**2

set fit logfile '4-2-fit.log'

fit f(x) './4-2.dat' using 1:2 via a,b,c

titulo = sprintf(" %.2f  + %.2f \\cos^2(\\frac{\\pi(x - (%.2f))}{180})", a, b, c)

d = 1

e = 35

f = 5

g(x) = d + e*cos(pi*(x - f)/180)**2

fit g(x) './4-2.dat' using 1:3 via d,e,f

titulo2 = sprintf(" %.2f  + %.2f \\cos^2(\\frac{\\pi(x - (%.2f))}{180})", d, e, f)


set notitle

set xrange [0: 180]

set print 'regrec2-1-0.tex'
print titulo

set print 'regrec2-2-90.tex'
print titulo2

plot f(x) t '' lw 2 , g(x) t '' lw 2, './4-2.dat' u 1:2 w points t 'placa $\frac{\lambda}{4}$ em mínimo' lt 4,   './4-2.dat' u 1:3 w points t ' + 90º' lt 6

! mv '4-2-fitted.eps' ./../graph/
! mv '4-2-fitted.tex' ./../graph/
! rm '4-2-fit.log'
!mv regrec2-1-0.tex ./../equation/
!mv regrec2-2-90.tex ./../equation/
