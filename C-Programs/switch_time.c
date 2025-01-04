#include<stdio.h>
int main()
{
    int n,h,h1,m,m1;
    printf("enter seconds to convert in hour min. sec.");
    scanf("%d",&n);

    h=n/3600;
    h1=n%3600;
    m=h1/60;
    m1=h1%60;

    printf("hour:%d,minute:%d,second:%d",h,m,m1);
    return 0;
}