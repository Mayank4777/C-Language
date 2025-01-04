#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter your marks");
    scanf("%d",&a);

    if (a>=70)
    {
        printf("Distinction");
    }
    else if (a>=60&&a<70)
    {
        printf("first class");
    }
    else if (a>=35&&a<=60)
    {
        printf("second class");
    }
    else
    {
        printf("fail");
    }
    return 0;
}
