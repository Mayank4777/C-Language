#include<stdio.h>
int main()
{
    int a,b,ans;
    printf("Enter two value to find bigger value\n");
    scanf("%d%d",&a,&b);

    ans=(a>b)?printf("a is greater than b"):printf("b is greater than a");
    return 0;
}