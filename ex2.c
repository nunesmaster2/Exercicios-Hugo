/*

Objective

The modulo operator, %, returns the remainder of a division. For example, 4 % 3 = 1 and 12 % 10 = 2. The ordinary division operator, /, returns a truncated integer value when performed on integers. For example, 5 / 3 = 1. To get the last digit of a number in base 10, use 10 as the modulo divisor.

Task

Given a five digit integer, print the sum of its digits.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int num, sum = 0;
    // scanf
    printf("Introduza um numero de 5 digitos: ");
    scanf("%d", &num);

    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("%d", sum);
}