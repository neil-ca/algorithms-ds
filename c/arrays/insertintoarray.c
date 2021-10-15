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
  int arr[max], length, i, position, j, d;
  printf("Enter length of array: ");
  scanf("%d", &length);
  printf("Enter %d elements of array\n", length);
  for(i = 0; i <= length-1; i++) {
    printf("# %d:  ", i);
    scanf("%d", &arr[i]);
  }

  printf("\nThe array is:\n");
  for(i = 0; i <= length-1; i++){
    printf("%d\n", arr[i]);
  }
  printf("\nEnter target position to insert: ");
  scanf("%d", &position);
  position--;

  for(j = length-1; j >= position; j--) {
    printf("# %d:  ", j--);
    arr[j+1] = arr[j];
  }

  // Shifting all the elements of the array one position down from the location of insertion
  printf("\nEnter the value to insert:");
  scanf("%d", &arr[position]);
  printf("\nArray after insertion of element: \n");
  for(i = 0; i <= length; i++)
    printf("%d\n", arr[i]);
  return 0;
}

