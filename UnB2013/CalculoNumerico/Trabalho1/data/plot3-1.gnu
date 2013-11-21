set terminal epslatex size 14cm,8cm color colortext 'phv,9' header '\definecolor{t}{rgb}{0.5,0.5,0.5}'
# ------------------------------------
# ------------------------------------
# ------------DEFININDO ESTILOS-------
# ------------------------------------
# ------------------------------------
#set style line 11 lc rgb '#808080' lt 1
#set border 3 front ls 11




# ------------------------------------
# ------------	PLOTANDO 3-1	-------
# ------------------------------------
# ------------------------------------
set output '3-1.tex'

set ylabel '$x^*_k(\lambda)$' norotate

set xlabel '$\lambda$' norotate

set notitle

plot './3-1.dat' u 1:2 w dots lw 3.0 lc 0 t ''

! mv '3-1.eps' ./../graph/
! mv '3-1.tex' ./../graph/

# ------------------------------------
# ------------	PLOTANDO 3-2	-------
# ------------------------------------
# ------------------------------------
set output '3-2.tex'

set ylabel '$x^*_k$'

set xlabel '$\lambda$' norotate

set notitle

se yrange [-0.1:1.05]


plot './3-2.dat' u 1:2 w dots lw 3.0 lc 0 t''

! mv '3-2.eps' ./../graph/
! mv '3-2.tex' ./../graph/

# ------------------------------------
# ------------	PLOTANDO 3-3	-------
# ------------------------------------
# ------------------------------------
set output '3-3.tex'

set ylabel '$x^*_k$'

set xlabel '$\lambda$' norotate

set notitle

se xrange [3.4:3.8]
se yrange [0.2:1.0]

plot './3-2.dat' u 1:2 w dots lw 3.0 lc 0 t''

! mv '3-3.eps' ./../graph/
! mv '3-3.tex' ./../graph/
# ------------------------------------
# ------------	PLOTANDO 3-4	-------
# ------------------------------------
# ------------------------------------
set output '3-4.tex'

set ylabel '$x^*_k$'

set xlabel '$\lambda$' norotate

set notitle

se xrange [3.8:4.0]
se yrange [0.0:1.0]

plot './3-2.dat' u 1:2 w dots lw 3.0 lc 0 t''

! mv '3-4.eps' ./../graph/
! mv '3-4.tex' ./../graph/
