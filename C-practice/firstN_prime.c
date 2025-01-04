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
    int len = 0;
    while (n > 0)
    {
        len++;
        n = n / 10;
    }
    return len;
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
int main()
{
    int n;
    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        int temp = n;
        int len = 0;
        len = length(n);
        // printf("The length is %d\n", len);

        int pow = 0;
        pow = power(len);
        // printf("power %d\n", pow);

        int rem = 0, newN = 0, p[len];
        for (int i = 0; i < len; i++)
        {
            rem = n % 10;
            // printf("modula %d\n", rem);
            n = n / 10;
            // printf("n: %d\n", n);
            newN = (rem * pow) + n;
            printf("Rotated N: %d\n", newN);
            if (isPrime(newN))
            {
                
                p[i] = newN;
                // printf("prime p[%d]=%d\n",i,p[i]);
            }
            else
            {
                p[i] = 0;
                // printf("not prime p[%d]=%d\n",i,p[i]);
            }
            n = newN;
        }
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if (p[i] != 0)
            {
                printf("%d\n", p[i]);
                count++;
            }
        }
        printf("count = %d\n",count);
        if (count == len)
        {
            printf("Entered %d is circular prime!\n\n",temp);
        }
        else{
            printf("Entered %d is not circular prime!\n\n",temp);
        }
    }
}