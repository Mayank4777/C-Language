#include<stdio.h>
int main()
{
    int mark;
    printf("enter your percentage");
    scanf("%d",&mark);

    (mark>=33)?printf("pass"):printf("fail");
    return 0;
}