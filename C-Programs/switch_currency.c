#include<stdio.h>
int main()
{
    int x,a,b,c,d,e,f,g,h,i,j,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;
    printf("enter amount:");
    scanf("%d",&x);

    a=x/2000;
    r1=x%2000;
    b=r1/500;
    r2=r1%500;
    c=r2/200;
    r3=r2%200;
    d=r3/100;
    r4=r3%100;
    e=r4/50;
    r5=r4%50;
    f=r5/20;
    r6=r5%20;
    g=r6/10;
    r7=r6%10;
    h=r7/5;
    r8=r7%5;
    i=r8/2;
    r9=r8%2;
    j=r9/1;
    r10=r9%1;

    printf("Notes=2000:%d 500:%d 200:%d 100:%d 50:%d 20:%d 10:%d 5:%d 2.coin:%d 1.coin:%d",a,b,c,d,e,f,g,h,i,j);

    return 0;
}