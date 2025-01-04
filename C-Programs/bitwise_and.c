#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("enter a: enter b:");
    scanf("%d%d",&a,&b);

    c=a&b;
    printf("bitwise and=%d",c);
    return 0;
}