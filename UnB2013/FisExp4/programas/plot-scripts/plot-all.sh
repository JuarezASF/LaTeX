#! /bin/bash

gnuplot plot-B.txt

gnuplot plot-E.txt

mv E.eps E-graph.eps

mv B.eps B-graph.eps

cp E.tex ./../../images

cp B.tex ./../../images

cp E-graph.eps ./../../images

cp B-graph.eps ./../../images

echo "Lembre de mudar o nome dos includegrpah em campo.tex!"
