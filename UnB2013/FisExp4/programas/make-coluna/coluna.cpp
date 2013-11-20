#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main(int argc, char* argv[]){


	if(argc == 0)
		{
		cout << "Entre com o nome do arquivo a ser gerado!" << endl ;
		exit(1);
		}
	ofstream output(argv[1]);
	int i;
	//float x;

	for (i = 15; i <=65; i+= 2)
		output << i << "\t" <<endl;

		return 0;
	

	}
