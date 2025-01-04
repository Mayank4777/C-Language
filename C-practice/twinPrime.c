//   Write a function to check if a number is  a twin prime
// (has a difference of 2 with another prime number). 

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
                if(isPrime(i+2)){
                    printf("(%d , %d)\n", i,i+2);
                }
                
            }
        }
        printf("\n");
    }
}




// #include <stdio.h>
// int isPrime(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     int n;
//     while (1)
//     {
//         printf("Enter n:");
//         scanf("%d", &n);

//         if (isPrime(n))
//         {
//             printf("Your entered number is prime!\n");
//             if (isPrime(n + 2))
//             {
//                 printf("The number %d is twin prime because %d+2=%d is also prime!\n", n, n, n + 2);
//             }
//             else
//             {
//                 printf("This is not twin prime number!\n");
//             }
//         }
//         else
//         {
//             printf("Sorry you entered number is not prime!\n");
//         }
//     }
// }

