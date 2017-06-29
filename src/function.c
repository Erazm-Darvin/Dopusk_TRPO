#include "function.h"
#include <math.h>
#include <stdio.h>

void Math(float a, float b, float c) {
    if((b*b - 4*a*c) >= 0) { //Если дискриминант больше или равен 0
    	Koren_Ur_1(a, b, c);
	Koren_Ur_2(a, b, c);
	}
	else
	{
	printf("Дискриминант меньше 0, корни невещественные.");
	}

}


void Diskreminant(float a, float b, float c) {
    float d;
    d = (b*b - 4*a*c) >= 0;
    printf("d = %f", d);
}
    



void Koren_Ur_1(float a, float b, float c) {
    float x;
    x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
	printf("x1 = %f", x);
}


void Koren_Ur_2(float a, float b, float c) {
    float y;
    y = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
	printf("x2 = %f", y);
}
    
int Proverka(float d)
{
	
	if (d == 0) {
		return 0;
	}
	if (d < 0) {
		return 1;
	}
	if (d > 0) {
		return 2;
	}
	return 0;
}
