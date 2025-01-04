#include<stdio.h>
int main()
{
    int a;
    printf("enter a :");
    scanf("%d",&a);

    if (a==0)
    {
        printf("zero");
    }
        else if (a>0)
        {
            printf("positive");
        }
            else if (a<0)
            {
                printf("negative");
            }
    return 0;
}