//Problem:  Write a function to check if an even number  can be expressed as the sum of two 
//prime numbers (Goldbach's conjecture). 
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
int main()
{
    int n;
    while (1)
    {
        printf("Enter n: ");
        scanf("%d", &n);

        for (int i = 1; i <= n / 2; i++)
        {
            for (int j = n; j > 0; j--)
            {
                if ((i + j) == n)
                {
                    if (isPrime(i) && isPrime(j))
                    {
                        printf("(%d + %d) = %d\n", i, j, n);
                    }
                }
            }
        }
    }
}