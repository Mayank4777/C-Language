#include<stdio.h>
int main()
{
    int a,b,ans;
    printf("Enter two value to find bigger value\n");
    scanf("%d%d",&a,&b);

    ans=(a>b)?a:b;
    printf("%d is the greatest value\n",ans);

    ans=(a<b)?a:b;
    printf("%d is the lowest value\n",ans);
    return 0;
}