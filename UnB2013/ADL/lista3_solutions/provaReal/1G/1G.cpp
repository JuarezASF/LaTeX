#include <cmath>
#include <iostream>


using namespace std;

int main(){

	int prev = 0;
	int prevPrev = 0;
	int nSteps = 10;
	int *y;
	y = new int[nSteps];
	y[0] = pow(0+2, 2)+7*prev - 10*prevPrev;
	y[1] = pow(1+2, 2)+7*y[0] - 10*prev;

	for(int i = 2; i < nSteps; i++){
		y[i] = pow(i+2, 2)+7*y[i-1] - 10*y[i-2];
	}

	cout << "\n\n aqui estão os primeiros termos da sequencia" << endl;
	for(int i = 0; i < nSteps; i++){
		cout << i << "\t" << y[i] << endl;
	}

	float A = 1075/96;
	float B = -44/3;
	float C = 1/4;
	float D = 21/8;
	float E = 239/32;
	float *myY;
	myY = new float[nSteps];

	cout << "\n\n aqui estão os primeiros termos da minha solução" << endl;
	for(int i = 0; i < nSteps; i++){
		myY[i] = A*pow(5, i) + B*pow(2, i)+ C*pow(i, 2)+ D*i + E;
		cout << i << "\t" << myY[i] << endl;
	}



	delete[] y;
}