#include<stdio.h>
int main()
{
    int a,b,ans;
    printf("enter a , b\n");
    scanf("%d %d",&a,&b);

    ans=(a>b)? printf("a is greater"):printf("b is greater");

    return 0;
}