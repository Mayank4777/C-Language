#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a b");
    scanf("%d%d",&a,&b);

    ((a>0)&&(b>0))? printf("positive"):printf("negative");
    return 0;
}