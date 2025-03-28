/*
Problem 5:
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>

int main()
{
    int num = 40, flag1, flag2 = 1 ;

    while (flag2)
    {
        flag1 = 1;

        for(int i = 1; i <= 20; i++)
        {
            if(num % i != 0)
             {
                flag1 = 0;
             }
        }

        if(flag1 == 0)
        {
            num++;
        }
        else
        flag2 = 0;

    }
    printf("%d", num);    

}