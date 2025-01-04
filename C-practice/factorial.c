//Write a function to calculate the factorial  of a number. 
#include <stdio.h>
int main()
{
    int n = 1, result = 1;
    while (1)
    {
        result=1;
        printf("Enter a number: \n");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("Number must be positive");
            return 0;
        }
        else
        {

            for (int i = 1; i <= n; i++)
            {
                result = result * i;
            }
            printf("result=%d\n", result);
        }
        if (n == -1)
        {
            break;
        }
    }
}