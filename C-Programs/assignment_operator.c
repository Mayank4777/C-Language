#include<stdio.h>
int main()
{
    int a;
    printf("enter number\n");
    scanf("%d",&a);

    printf("a+=5=%d\n",a+=5);
    printf("a-=5=%d",a-=5);
    printf("a/=5=%d\n",a/=5);
    printf("a*=5=%d\n",a*=5);
    printf("a^5=%d\n",a^5);

    return 0;
}