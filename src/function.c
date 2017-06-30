#include "function.h"
#include <math.h>

int Proverka(float D)
{
	if (D == 0) {
		return 0;
	}
	if (D < 0) {
		return 1;
	}
	if (D > 0) {
		return 2;
	}
	return 0;
}

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
