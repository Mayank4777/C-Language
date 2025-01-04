// Write a function to check if a number or  string is a palindrome (reads the same
// backward as forward).
#include <stdio.h>
int main()
{
    int n, rem, result = 0;
    while (1)
    {
        result = 0;
        printf("Enter string: ");
        scanf("%d", &n);

        printf("Entered number is %d \n", n);
        int a = n;
        while (n > 0)
        {
            rem = n % 10;
            result = (result * 10) + rem;
            n = n / 10;
        }
        printf("result=%d \nn=%d\n\n", result, n);

        if (a == result)
        {
            printf("The numbber is pallindrome!\n");
        }
        else
        {
            printf("The number is not pallindrome!\n");
        }
        if (n == -1)
        {
            break;
        }
    }
}