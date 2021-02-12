#include <stdio.h>
#include <stdlib.h>

/*
- Inserting an element in an array
You can define the length of the array and also specify the location where you want the new
value to be inserted
*/
#define max 100
int main()
{
    int p[max], n, i, k, j, d;
    printf("Enter length of array: ");
    scanf("%d", &n);
    printf("Enter %d elements of array\n", n);
    for(i = 0; i <= n-1; i++)
        scanf("%d", &p[i]);

    printf("\nThe array is:\n");
    for(i = 0; i<=n-1; i++){
        printf("%d\n", p[i]);
    }
    printf("\nEnter target position to insert: ");
    scanf("%d", &k);
    k--;
    for(j = n-1; j >= k; j--)
        p[j+1] = p[j];

    // Shifting all the elements of the array one position down from the location of insertion
    printf("\nEnter the value to insert:");
    scanf("%d", &p[k]);
    printf("\nArray after insertion of element: \n");
    for(i = 0; i<=n; i++)
        printf("%d\n", p[i]);
    return 0;
}

