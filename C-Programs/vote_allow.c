#include<stdio.h>
int main()
{
    int a;
    printf("enter your age");
    scanf("%d",&a);

    a=(a>=18)?printf("you can vote"):printf("you cannot vote");
    return 0;
}