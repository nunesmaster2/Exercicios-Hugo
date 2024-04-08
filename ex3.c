/*

Write a C program to input two or more numbers from user and find maximum and minimum of the given numbers using functions. 
How to find maximum and minimum of two or more numbers using functions in C programming.

Example

Input

Input two numbers: 10
20
Output

Maximum = 20
Minimum = 10

Re 

*/

/* 
 * C program to find maximum and minimum between two numbers using functions
 */

#include <stdio.h>

/* Function declarations */
int max(int num1, int num2);
int min(int num1, int num2);



int main() 
{
    int num1, num2, maximum, minimum;
    
    /* Input two numbers from user */
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    // Call maximum function
    // Call minimum function
    
    printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d", minimum);
    
    return 0;
}


/**
 * Find maximum between two numbers.
 */
int max(int num1, int num2)
{
    
}

/**
 * Find minimum between two numbers.
 */
int min(int num1, int num2) 
{
    
}