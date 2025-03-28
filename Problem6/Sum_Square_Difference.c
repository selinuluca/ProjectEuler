/*
Problem 6:
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025.
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 
3025 - 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>
int main()
{
    int sum_of_sqr = 0, sqr_of_sum = 0, total = 0, difference = 0, i;
    for(i = 1; i <= 100; i++)
    {
        sum_of_sqr += i*i;
        total += i;
    }
    sqr_of_sum = total * total;
    difference = sqr_of_sum - sum_of_sqr;
    printf("%d", difference);

    return 0;
}