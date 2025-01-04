#include<stdio.h>
int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);

    (a!=0)?(a>0)? printf("positive"):printf("negative"):printf("zero");
    return 0;
}