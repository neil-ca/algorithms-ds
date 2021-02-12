#include<stdio.h>
#define N_ELEMENTOS 10

int main() {
	int m[N_ELEMENTOS], i;

	printf("Introduce los valores de la matriz\n");

	// entrada de datos
	for (i = 0; i < N_ELEMENTOS; i++)
	{
	  printf("m[%d] = ", i);
 	  scanf("%d", &m[i]);
	}

	// salida
	for (i = 0; i < N_ELEMENTOS; i++)
		printf("%d\n", m[i]);
}
