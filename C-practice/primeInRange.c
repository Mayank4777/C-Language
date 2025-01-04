//Write a function to find the sum of all prime  numbers less than or equal to a given limit
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
    int n1, n2, i, j;
    while (1)
    {
        printf("Enter starting number: ");
        scanf("%d", &n1);
        printf("Enter last number: ");
        scanf("%d", &n2);

        printf("Prime numbers: \n");
        for (i = n1; i < n2; i++)
        {
            if (isPrime(i))
            {
                if (i == 0 || i == 1)
                {
                    continue;
                }
                printf("%d\t", i);
            }
        }
        printf("\n");
    }
}