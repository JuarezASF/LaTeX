set title "Comparando algoritmos de busca por colisões"
 set xlabel 'Número de partículas' 
 set ylabel 'Tempo de execução(s)' 

f(x) = a*x + b

fit f(x) './hash_time.dat' u 1:2 via a,b

g(x) = c*x**2 + d*x + e

fit g(x) './ineficiente_time.dat' u 1:2 via c,d,e


set output "./SAC.tex"

set key left

set term jpeg

set output "../images/comparandoAlgoritmos.jpg"


plot './hash_time.dat' u 1:2 w points lt 6 lc rgb 'black' t 'algoritmo baseado em hashing', \
'./ineficiente_time.dat' u 1:2 w points lt 5 lc rgb 'red' t 'algoritmo trivial', f(x) w lines lc rgb 'black' lt 1 t '', \
g(x) w lines lc rgb 'red' lt 2 t ''
