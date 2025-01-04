//Write a function to check if a number is  prime.
#include <stdio.h>
int checkPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        // printf("nMi:->%d",n%i);
        if (n % i == 0)
        {
            // printf("return");
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, i = 1, prime;
    while (1)
    {

        printf("\nEnter a number to check whether it is prime number or not: ");
        scanf("%d", &n);
        prime = checkPrime(n);
        if (prime == 0)
        {
            printf("The number is not prime False!\n");
        }
        else
        {
            printf("The number is prime True!\n");
        }
        if (n == -1)
        {
            break;
        }
    }
}