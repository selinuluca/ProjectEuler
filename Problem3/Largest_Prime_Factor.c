/*
Problem 3:
The prime factors of 13195 are 5, 7, 13 and 29. //kendisinden başka sayılara bölünmeyen sayılara asal sayılar denir. 
What is the largest prime factor of the number 600851475143?    //sayının en büyük asal çarpanı?
*/
#include <stdio.h>

int main()
{
    unsigned long long int num = 600851475143;

    for( unsigned long long int i = 2; i < num; i++)
    {
        while(num % i == 0)
        {
            num /= i;
        }
    }
    printf("%lld", num);

    return 0;
}


/*
MY SECOND SOLUTION, BUT IT IS NOT EFFICIENT.
#include <stdio.h>

int isPrimeFactor(unsigned long long int num);

int main ()
{
    unsigned long long int num = 600851475143ULL;
    int flag;

    for(long long int i = num / 2; i >= 2; i--)
    {
        if(num % i == 0)
        {
            flag = isPrimeFactor(i);
            if(flag)
                { printf("%llu sayisinin asal sayilarinin en buyugu: %lld\n",num, i);
                break;
                }
        }
    }
    return 0;
}

int isPrimeFactor(unsigned long long int num)
{
    int flag = 1;

    for(unsigned long long int i = num / 2; i >= 2; i--)
    {
        if(num % i == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}
*/
