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
	
	i = Proverka(a,b,c);
	D = Discriment(a,b,c);

	switch (i) {
		case 1:
			{x = Koren_Ur1(a, b, D);
			printf ("%.2f",x);
			}
			break;
		case 0:
			{printf("выражение не имеет смысла");}
			break;
		case 2:
			{x = Koren_Ur2(a, b, D);
			printf ("%.2f\n",x);
			x = Koren_Ur3(a, b, D);
			printf ("%.2f\n",x);
			}
			break;
		case 3:{ x = -1*(c/b);
            printf ("%.2f\n",x);
		    } 
            break;
		case 4:{ x = sqrt((-1*c)/a); 
            printf ("%.2f\n",x);          
            }
            break;
	}
	return 0;
}
