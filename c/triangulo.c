#include <stdio.h>

int main()
{
	float base = 0.0, altura = 0.0, area = 0.0;
		
	printf("Introduce la base:\n");
	scanf("%f", &base);

	printf("Introduce la altura:\n");
	scanf("%f", &altura);

	area = base * altura / 2 ;
	printf("Area = %f\n", area);
}
