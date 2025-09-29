#include <stdio.h>
#include <stdio.h>
 
int main(int argc, const char *argv[])
{
	int s = 0 ; // signted int
	printf("Number of seconds ");
	scanf("%d", &s);

	if (s < 0 || s >= 86400)
	{

		if (s < 0)
			printf("Error.\n");

		else
			printf("Overflow\n");
			
	}
	else
	{
		printf("%02u:%02u:%02u \n", (s / 3600), (s % 3600) / 60, s % 60);
		
	}
}