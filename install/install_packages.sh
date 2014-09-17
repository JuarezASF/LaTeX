#!/bin/bash

mkdir latex_packages

echo 'creating directories'
mkdir /usr/local/share/texmf/tex
mkdir /usr/local/share/texmf/tex/latex/

cd latex_packages/ 

echo 'downloading enuitem'
wget "http://mirrors.ctan.org/macros/latex/contrib/enumitem.zip"
echo 'extracting enumitem'
unzip enumitem.zip
mv enumitem/ /usr/local/share/texmf/tex/latex/

echo 'downloading placins'
wget "http://mirrors.ctan.org/macros/latex/contrib/placeins.zip"
echo 'extracting placeins'
unzip placeins.zip
mv placeins/ /usr/local/share/texmf/tex/latex/

cd /usr/local/share/texmf/
mktexlsr
cd -