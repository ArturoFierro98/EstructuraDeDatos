

#include <iostream>
#include<stdlib.h>
using namespace std;

void convertir(double& x,double& y, double& r, double& angulo)
{
	

	r = sqrt(pow(x, 2) + pow(y, 2));
	angulo = atan(y / x);
	angulo = angulo * (180 / 3.1416);
	

	
}

void captura(double& x, double& y) {
	cout << "Coordenada X: ";
	cin >> x;
	
	if (x < 0 or x > 1000) {
		int c = 0;
		do {
			cout << "Los valores deben ser entre >= 0 y <=1000" << endl;
				c++; 
				cout << "Coordenada X: ";
				cin >> x;
				if (c == 2) {
					exit(1);
				}
					
		} while (x < 0 or x > 1000);
		
		}
	cout << "Coordenada Y: ";
	cin >> y;
	if ( y< 0 or y > 1000) {
		int c = 0;
		do {
			cout << "Los valores deben ser entre >= 0 y <=1000" << endl;
			c++;
			cout << "Coordenada Y: ";
			cin >> y;
			if (c == 2) {
				exit(1);
			}
		} while (y < 0 or y > 1000);

	}
}

void imprimir(double r, double angulo){
	cout << endl << "r = " << r << endl;
	cout << "Angulo  = " << angulo << " grados"<<endl;
}


int main()
{
	double x, y, r, angulo;

	captura(x, y);
	convertir(x, y, r, angulo);
	imprimir(r, angulo);
	system("pause");

    
}

