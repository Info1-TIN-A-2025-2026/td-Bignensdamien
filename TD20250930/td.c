#include <stdio.h>
#include <stdio.h>
 
int main(int argc, const char *argv[])
{
	double m1 = 0 ; 
	double m2 = 0 ; 
	double r = 0 ;
	double F = 0; 
	const double G = 6.67e-11;

	printf("valeur de la masse 1 en Kg ");
	scanf("%lf", &m1);
	printf("valeur de la masse 2 en Kg ");
	scanf("%lf", &m2);
	printf("valeur de la distance 1 en m ");
	scanf("%lf", &r);
	if (m1 < 0 || m2 < 0 || r < 0  )
	{
		printf("Error.\n");
	}
	else
	{

		F = G * ((m1 * m2) / (r * r));
		printf("la valeur de gravitation vaut :%.2e \n", F );
	}
}