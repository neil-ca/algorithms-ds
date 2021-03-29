#include <stdio.h>

int main() {
	int a[3][5];
	int i, j;
	printf("Enter the elements: ");
	for( i = 0; i <= 2; i++) {
		for(j = 0; j <= 4; j++) {
			scanf("%d", &a[i][j]);
		for(j=0; j <=