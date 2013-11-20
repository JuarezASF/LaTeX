set terminal epslatex size 10cm,8cm # color colortext 'phv,9' header '\definecolor{t}{rgb}{0.5,0.5,0.5}'
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
set style line 1 lc rgb '#8b1a0e' pt 1 ps 1.5 lt 1 lw 6 # --- red
set style line 2 lc rgb '#5e9c36' pt 6 ps 1.5 lt 1 lw 6 # --- green
set style line 3 lc rgb '#00008B' pt 6 ps 1.5 lt 1 lw 6 # --- dark blue
set style line 4 lc rgb '#000000' pt 1 ps 1.5 lt 1 lw 6 # --- preto
set style line 5 lc rgb '#0000FF' pt 6 ps 1.5 lt 1 lw 6 # --- 
set style line 6 lc rgb '#006400' pt 6 ps 1.5 lt 1 lw 6 # --- verde

# ------------------------------------
# ------------	PLOTANDO 2-1	-------
# ------------------------------------
# ------------------------------------
set output '2-1.tex'
set xlabel '$\lambda$'

set ylabel '$x^*(\lambda)$' norotate

set notitle

plot './2-1.dat' u 1:2 w points lt 6 lc 3 t'$x^*(\lambda)$', './2-1.dat' u 1:2 w lines t ''

! mv '2-1.eps' ./../graph/
! mv '2-1.tex' ./../graph/
# ------------------------------------
# ------------	PLOTANDO 2-2-1-------
# ------------------------------------
# ------------------------------------


set output '2-2-1.tex'

set xlabel 'n'

set ylabel '$x^{(n)}$'

set yrange [-1.2: 1.2]

set xrange [-1:20]

set title '$x^{(n)} \times n [x_0 = 0.5]$'

set key bottom horizontal

plot './2-2-x0=(0,5).dat' u 1:2 w lines lt 1 lw 4 t '$\lambda = -4$', './2-2-x0=(0,5).dat' u 1:3 w lines lt 2 lw 4 t '$\lambda = -1.2$', './2-2-x0=(0,5).dat' u 1:4 w lines lt 3 lw 4 t '$\lambda = -0.4$', './2-2-x0=(0,5).dat' u 1:5 w lines lt 4 lw 4 t '$\lambda = 0.4$', './2-2-x0=(0,5).dat' u 1:6 w lines lt 5 lw 4 t '$\lambda = 1.2$', './2-2-x0=(0,5).dat' u 1:7 w lines lt 6 lw 4 lc 0 t '$\lambda = 5$'

! mv '2-2-1.eps' ./../graph/
! mv '2-2-1.tex' ./../graph/

# ------------------------------------
# ------------	PLOTANDO 2-2-2-------
# ------------------------------------
# ------------------------------------


set output '2-2-2.tex'

set title '$x^{(n)} \times n [x_0 = 2.0]$'

plot './2-2-x0=(2,0).dat' u 1:2 w lines lt 1 lw 4  t '$\lambda = -4$', './2-2-x0=(2,0).dat' u 1:3 w lines lt 2 lw 4  t '$\lambda = -1.2$', './2-2-x0=(2,0).dat' u 1:4 w lines lt 3 lw 4 t '$\lambda = -0.4$', './2-2-x0=(2,0).dat' u 1:5 w lines lt 4 lw 4 t '$\lambda = 0.4$', './2-2-x0=(2,0).dat' u 1:6 w lines lt 5 lw 4 t '$\lambda = 1.2$', './2-2-x0=(2,0).dat' u 1:7 w lines lt 6 lw 4 lc 0 t '$\lambda = 5$'

! mv '2-2-2.eps' ./../graph/
! mv '2-2-2.tex' ./../graph/

# ------------------------------------
# ------------	PLOTANDO 2-2-3-------
# ------------------------------------
# ------------------------------------


set output '2-2-3.tex'

set title '$x^{(n)} \times n [x_0 = -0.5]$'

plot './2-2-x0=(-0,5).dat' u 1:2 w lines lt 1 lw 4  t '$\lambda = -4$', './2-2-x0=(-0,5).dat' u 1:3 w lines lt 2 lw 4  t '$\lambda = -1.2$', './2-2-x0=(-0,5).dat' u 1:4 w lines lt 3 lw 4  t '$\lambda = -0.4$', './2-2-x0=(-0,5).dat' u 1:5 w lines lt 4 lw 4  t '$\lambda = 0.4$', './2-2-x0=(-0,5).dat' u 1:6 w lines lt 5 lw 4  t '$\lambda = 1.2$', './2-2-x0=(-0,5).dat' u 1:7 w lines lt 6 lw 4  lc 0 t '$\lambda = 5$'

! mv '2-2-3.eps' ./../graph/
! mv '2-2-3.tex' ./../graph/


