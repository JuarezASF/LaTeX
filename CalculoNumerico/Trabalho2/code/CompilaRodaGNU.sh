#! /bin/bash

gcc -Wall quest1.c -o quest1 -lm
./quest1
gnuplot plot1-a.GNU
gnuplot plot1-b.GNU
mv tab-quest1* ./../LaTeX/tables
cd ..
cd LaTeX
cd tables
./TableMaker2 ./tab-quest1-X1.tab tab-quest1-X1.tex 2 0 6
./TableMaker2 ./tab-quest1-X2.tab tab-quest1-X2.tex 2 0 6
./TableMaker2 ./tab-quest1-X3.tab tab-quest1-X3.tex 2 0 6
./TableMaker2 ./tab-quest1-X5.tab tab-quest1-X5.tex 2 0 6
./TableMaker2 ./tab-quest1-X10.tab tab-quest1-X10.tex 2 0 6
cd ..
cd ..
cd code


gcc -Wall quest2.c -o quest2 -lm
./quest2
gnuplot plot2.GNU
mv tab-quest2* ./../LaTeX/tables
cd ..
cd LaTeX
cd tables
./TableMaker2 ./tab-quest2-X16.tab tab-quest2-X16.tex 2 0 6
cd ..
cd ..
cd code

gcc -Wall quest7.c -o quest7 -lm
./quest7

cd ..
cd LaTeX
PdfLatexCompile Trab2.tex 
cd .. 
cd code



