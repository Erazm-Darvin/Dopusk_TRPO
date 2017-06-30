#include "function.h"
#include <stdio.h>
#include <math.h>

int main ()
{
	float a,b,c,D, x;
	int i;
	printf("a*x^2+b*x+c=0\n");
	printf ("a = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f",&b);
	printf("c = ");
	scanf("%f",&c);
	D = Discriment(a,b,c);
	i = Proverka(D);
	switch (i) {
		case 0:
			x = Koren_Ur1(a, b, D);
			printf ("%.2f",x);
			break;
		case 1:
			printf("Has no roots");
			break;
		case 2:
			x = Koren_Ur2(a, b, D);
			printf ("%.2f\n",x);
			x = Koren_Ur3(a, b, D);
			printf ("%.2f",x);
			break;
	}
	return 0;
}
