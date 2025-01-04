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
int printDetails(int l, int *a)
{
    for (int i = 0; i < l; i++)
    {
        if (a[i] != 0)
        {
            printf("%d\t", a[i]);
        }
    }
}
int printTables(int *a)
{
    for (int i = 2; i <= 10; i++)
    {
        if (isPrime(i))
        {
            printf("%d * %d = %d\n", a[i], i, a[i] * i);
        }
    }
}
int main()
{
    int l;
    while (1)
    {
        printf("Enter limit for prime numbers: ");
        scanf("%d", &l);
        int a[l];
        for (int i = 0; i < l; i++)
        {
            if (i == 0 || i == 1)
            {
                a[i] = 0;
            }
            else if (isPrime(i))
            {
                a[i] = i;
                // printf("%d\t", i);
            }
            else
            {
                a[i] = 0;
            }
        }
        // printDetails(l, a);
        printf("\n");
        for (int i = 0; i < l; i++)
        {
            if (a[i] != 0)
            {
                printf("%d\t", a[i]);
            }
        }
        printf("\n");

        int t;
        printf("Enter limit for table: ");
        scanf("%d", &t);
        int b[t];
        for (int i = 0; i < t; i++)
        {
            if (i == 0 || i == 1)
            {
                b[i] = 0;
            }
            else if (isPrime(i))
            {
                b[i] = i;
            }
            else
            {
                b[i] = 0;
            }
        }
        printf("\n");
        // printDetails(t, b);
        for (int i = 0; i < t; i++)
        {
            if (b[i] != 0)
            {
                printf("%d\t", b[i]);
            }
        }
        printf("\n");

        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < t; j++)
            {
                if (a[i] != 0 && b[j] != 0)
                {
                    printf("%d * %d = %d\t", a[i], j, a[i] * j);
                    // printTables(b);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}