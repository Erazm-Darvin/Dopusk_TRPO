#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

	void Math(double a, double b, double c);


int	main() {

	double a;
	double b;
	double c;
	
    cout << "Введите значение a: ";
		cin >> a;
    cout << "Введите значение b: ";
		cin >> b;
    cout << "Введите значение c: ";
		cin >> c;
	
	Math(a, b, c);
	}

void Math(double a, double b, double c) {
	double x1, double x2;

    if((b*b - 4*a*c) >= 0) { //Если дискриминант больше или равен 0
    	x1 = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
	cout << "Первый корень равен " << x1 ;
    	x2 = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
	cout << "Второй корень равен " << x2 ;
	}
	else
	{
	cout << "Дискриминант меньше 0, корни невещественные." ;
	}

}

