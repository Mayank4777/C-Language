#include<stdio.h>
int main()
{
    int a;
    printf("enter value ");
    scanf("%d",&a);

    (!(a==0))?printf("not zero"):printf("zero");
    return 0;
}