//Write a function to find the largest prime  factor of a number 
//first method 
#include <stdio.h>
int gather_Prime(int *d, int *p, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 2; j < n; j++)
        {
            if (d[i] != 0)
            {
                if (d[i] % j == 0 && d[i] != j)
                {
                    d[i] = p[i] = 0;
                }
                else
                {
                    p[i] = d[i];
                }
            }
            else{
                 d[i] = p[i] = 0;
            }
        }
    }
}
int main()
{
    int n, i;
    while (1)
    {

        printf("Enter number: ");
        scanf("%d", &n);

        printf("Entered number is : %d\n", n);
        int d[n],p[n];

        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                d[i] = i;
                printf("%d / %d = %d\n", n, d[i], n / i);
            }
            else
            {
                d[i] = 0;
            }
        }
        gather_Prime(d, p, n);
        printf("\nThe prime factors are:\n");

        for (int i = 1; i < n; i++)
        {
            if (p[i] != 0)
            {
                printf("%d\n", p[i]);
            }
            
        }
        int max=0;
        for (int i = 1; i < n; i++)
        {
            if(p[i]>max){
                max=p[i];
            }
        }
        printf("Maximum prime factor is: %d\n",max);

        if (n == -1)
        {
            break;
        }
    }
}

// // second method to find prime factor
//  #include <stdio.h>
//  #include <stdlib.h>
//  int gather_Prime( int n)
//  {

//     for (int i = 2; i < n; i++)
//     {
//         // printf("nMi:->%d",n%i);
//         if (n % i == 0)
//         {
//             // printf("return");
//             return 0;
//         }
//     }
//     return 1;

// }
// int main()
// {
//     int n, i;
//     while (1)
//     {

//     printf("Enter number: ");
//     scanf("%d", &n);

//     printf("Entered number is : %d\n", n);
//     int d[n];
//     int p[n];

//     for (i = 1; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             d[i] = i;
//             // printf("%d / %d = %d\n", n, d[i],n/i);
//             // printf("%d\n", d[i]);
//         }
//         else{
//             d[i]=0;
//         }
//     }
//     printf("\n prime numbers: \n");
//     for(i=1;i<n;i++){
//         if(d[i]!=0){
//             // printf("%d\n",d[i]);
//             if (gather_Prime(d[i])==1)
//             {
//                 p[i]=d[i];
//                 printf("%d\n",p[i]);
//             }
//             else{
//                 p[i]=0;
//             }

//         }
//     }
//     // printf("\n Prime numbers: \n");
//     // for(i=1;i<=n;i++){
//     //     if(p[i]!=0){
//     //         printf("%d\n",p[i]);
//     //     }
//     // }
//         if (n == -1)
//         {
//             break;
//         }
//     }
// }