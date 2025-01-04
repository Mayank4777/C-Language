//Problem:  Write a function to find the first N circular  primes (primes that remain prime when 
//digits are rotated). 
#include <stdio.h>
int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int length(int n)
{
    int length = 0;
    while (n > 0)
    {
        length++;
        n = n / 10;
    }
    return length;
}
int power(int length)
{
    int power = 1;
    for (int i = 0; i < length - 1; i++)
    {
        power = power * 10;
    }
    return power;
}
int checkCircularPrime(int n, int len, int pow)
{
    int rem = 0, newN = 0, p[len];
    for (int i = 0; i < len; i++)
    {
        rem = n % 10;
        n = n / 10;
        newN = (rem * pow) + n;
        if (isPrime(newN))
        {
            p[i] = newN;
        }
        else
        {
            p[i] = 0;
        }
        n = newN;
    }
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (p[i] != 0)
        {
            count++;
        }
    }
    if (count == len)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    while (1)
    {
        printf("Enter limit: ");
        scanf("%d", &n);
        int len = 0;
        int pow = 0;
        int a[n];
        // printf("\nCicular primes:\n");
        for (int i = 1; i < n; i++)
        {
            len = length(i);
            pow = power(len);
            if (isPrime(i))
            {
                if (checkCircularPrime(i, len, pow))
                {
                    printf("%d\t", i);
                }
            }
        }
        printf("\n");
    }
}