#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define MAX_LEN 100

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{ system("clear");
  int i,size;
  printf("\t\t\tProgram to print the Second Largest number in a given array\n\n\n");
  printf("Size of the array = ");
  scanf("%d",&size);
  assert(size<MAX_LEN);
  int *array=malloc(sizeof(int)*size);
  printf("the size of the array is %d\n",size);
  for(i=0;i<size;i++)
     scanf("%d",&array[i]);
  printf("Before sorting\n ");
  for(i=0;i<size;i++)
     printf("%d\t",array[i]);
  printf("\n");
  printf("After sorting\n");
  quickSort(array,0,size);
  for(i=0;i<size;i++)
     printf("%d\t",array[i]);
  printf("\n");
  printf("The second largest element is %d\n",array[size-2])  ;
 return 0; 
}
