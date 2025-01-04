#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b");
    scanf("%d%d",&a,&b);

    printf("%d",(a>b)||(a<b));
    return 0;
}
