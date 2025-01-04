// Problem:  Write a function to count the number of trailing  zeros in the factorial of a number.
#include <stdio.h>
int getPower(int n)
{
    int pow = 1, i;
    for (i = 0; i < n; i++)
    {
        pow = pow * 5;
    }
    return pow;
}
int main()
{
    int n, factorial, i,pow=0;
    while (1)
    {
        factorial = 1;
        int count = 0;
        printf("enter number: ");
        scanf("%d", &n);
        int temp = n;

        for (int i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
        printf("%d\n", factorial);
        for (i=1;i<n/5;i++)
        {
            pow=getPower(i);
            temp=n/pow;
            count=count+temp;
            // printf("temp=%d\n",temp);
        }
        printf("Trailing zeros: %d\n", count);
    }
}


// #include <stdio.h>

// int countTrailingZerosInFactorial(int n) {
//     int count = 0;
//     // Divide n by increasing powers of 5 and count the occurrences of 5
//     for (int i = 5; n / i >= 1; i *= 5) {
//         count += n / i;
//     }
//     return count;
// }

// int main() {
//     int num;
//     while(1){
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     int zeros = countTrailingZerosInFactorial(num);
    
//     printf("The number of trailing zeroes in the factorial of %d is: %d\n", num, zeros);
//     }
//     return 0;
// }
