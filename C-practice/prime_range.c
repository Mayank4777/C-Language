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
int length(int n, int *len)
{
    int length = 0;
    while (n > 0)
    {
        length++;
        n = n / 10;
        printf("%d\t",n);
    }
    *len = length;
}
int power(int length, int *pow)
{
    int power = 1;
    for (int i = 0; i < length - 1; i++)
    {
        power = power * 10;
    }
    *pow = power;
}
int checkCircularPrime(int n,int len,int pow){
    int rem = 0, newN = 0, p[len];
    for (int i = 0; i < len; i++)
        {
            rem = n % 10;
            n = n / 10;
            newN = (rem * pow) + n;
            printf("Rotated N: %d\n", newN);
            if (isPrime(newN))
            {
                // printf("Rotated N: %d\n", newN);
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
                printf("%d\n", p[i]);
                count++;
            }
        }
        if (count == len)
        {
            return 1;
        }
        else{
            return 0;
        }
}
int main()
{
    int n;
    while (1)
    {
        printf("Enter number: ");
        scanf("%d", &n);
        int temp = n;
        int len = 0;
        length(n, &len);
        // printf("The length is %d\n", len);

        int pow = 0;
        power(len, &pow);
        printf("power %d\n", pow);
        
        if(checkCircularPrime(n,len,pow)==1){
            printf("%d Is cicular prime!\n",n);
        }
        else{
            printf("%d is not circular prime!\n",n);
        }
    }
}