#include <cmath>
#include <iostream>


using namespace std;

int main(){

	int *y;
	int nSteps = 10;
	y = new int[nSteps];
	y[0] = 0;
	y[1] = 0;

	for(int i = 2; i < nSteps; i++){
		int k = i;
		y[k] = pow(k-2, 2), +6*y[k-1] - 5*y[k-2];
	}

	cout << "\n\n aqui estão os primeiros termos da sequencia" << endl;
	for(int i = 0; i < nSteps; i++){
		cout << i << "\t" << y[i] << endl;
	}

	float *myY;
	myY = new float[nSteps];

	cout << "\n\n aqui estão os primeiros termos da minha solução" << endl;
	for(int i = 0; i < nSteps; i++){
		int k = i;
		myY[k] = 3.0/128.0*(pow(5.0, k) - 1.0) - 7.0/96.0*k + 1.0/16.0*k*k - 1.0/12.0*k*k*k;
		cout << i << "\t" << myY[i] << endl;
	}



	delete[] y;
}