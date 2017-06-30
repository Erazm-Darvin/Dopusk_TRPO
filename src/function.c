#include "function.h"
#include <math.h>
#include <stdio.h>


float Discriment(float a,float b, float c)
{
	float D = b*b - 4 * a * c;
	return D;
}

float Koren_Ur1(float a, float b, float D)
{
	float x = ((-1)*b) / (2 * a);
	return x;
}

float Koren_Ur2(float a, float b, float D)
{
	float x = ((-1)* b + sqrt(D)) / (2 * a);
	return x;
}

float Koren_Ur3(float a, float b, float D)
{
	float x = ((-1)* b - sqrt(D)) / (2 * a); 
	return x;
}


int Proverka(float a, float b, float c)
{
	   
    if (a == 0 && b!=0 ) {return 3;}
	if (b == 0 && a!=0 ) {if ((c>0 && a>0) || (c<0 && a<0)) return 0; return 4;}
    printf("1");
	if ((a == 0) && (b == 0)){return 0;}

	    printf("2");
        float D = Discriment(a,b,c);
		if (D == 0){return 1;}
		if (D < 0) {return 0;}
		if (D > 0) {return 2;}
    return 2;
}
