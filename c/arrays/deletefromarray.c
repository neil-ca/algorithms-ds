/*
For delete an element from an array, we going to copy all the elements from the 
bottom of the array in one place up to replace the element deleted
    p[0] = 10 
    p[1] = 20
    p[2] = 30
    p[3] = 40
if we want delete the third element -> p[2] then 
    p[3] will be copied to p[2] ... 
*/

#include <stdio.h>

int main()
{
    int p[100], i, n, a;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements of the array: \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);
    printf("Your array is: \n");
    for (i = 0; i < n; i++)
        printf("%d\n", p[i]);
    printf("Enter the position to delete an element: ");
    scanf("%d", &a);
    a--;
    for (i = a; i < n - 1; i++)
    {
        p[i] = p[i + 1];
        // All values from the bottom of the array are shifted up till the location
        // of the element to be deleted
    }
    p[n - 1] = 0;

    printf("Array after deleting the element is\n");
    for (i = 0; i < n - 1; i++)
        printf("%d\n", p[i]);
}
