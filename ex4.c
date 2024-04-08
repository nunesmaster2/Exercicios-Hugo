/*

Write a C program to declare, initialize, input elements in array and print array. How to input and display elements in an array using for loop in C programming. C program to input and print array elements using loop.

Example

Input

Input size: 10
Input elements: 1
2
3
4
5
6
7
8
9
10

Output: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
*/

/**
 * C program to read and print elements in an array
 */

#include <stdio.h>
#define MAX_SIZE 1000 // Maximum array size

int main()
{
    
    int i, N,arr[MAX_SIZE];

    /* Input array size */
    printf("Enter size of array: ");
    scanf("%d", &N);

    /* Input elements in array */
    printf("Enter %d elements in the array : ", N);
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }




    /*
     * Print all elements of array
     */

    printf("\nElements in array are: ");
    for(i=0;i<N;i++){
        printf("%d, ",arr[i]);
    }

    return 0;
}