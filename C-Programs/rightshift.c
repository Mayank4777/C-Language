#include<stdio.h>
int main()
{
    int a,c;
    
    printf("enter a:");
    scanf("%d",&a);

    c=a>>1;
    printf("right shift=%d",c);
    return 0;
}