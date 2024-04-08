/*

Write a C program to delete duplicate elements from array. How to remove duplicate elements from array in C programming. 
After performing delete operation the array should only contain unique integer value. Logic to delete duplicate elements from array.

Example

Input

Input array elements: 10, 20, 10, 1, 100, 10, 2, 1, 5, 10
Output

After removing all duplicate elements
Elements of array are: 10, 20, 1, 100, 2, 5
*/

/**
 * C program to delete all duplicate elements from array
 */

#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the array

int main()
{
    int arr[MAX_SIZE]; // Declares an array of size 100
    int size;          // Total number of elements in array
    int i, j, k;       // Loop control variables

    /* Input size of the array */
    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in the array */
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }


    /*
     * Find duplicate elements in array
     */
    for(j=0;j<size;j++){

        for(k=j+1;k<size;k++){

            if(arr[j]==arr[k]){

                for(i=k;i<size-1;i++){
                  arr[i]=arr[i+1];
                  
                }
                size = size-1;
                k--;
            }
        }
    }


    /*
     * Print array after deleting duplicate elements
     */
    printf("\nArray elements after deleting duplicates : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}