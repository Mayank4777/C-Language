#include<stdio.h>
int main()
{
    int c,d,mod;
    float a,b,add,mul,div,sub;
    printf("enter a and b\n");
    scanf("%f %f",&a,&b);

    printf("enter c and d for mod\n");
    scanf("%d %d",&c,&d);

    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=c%d;

    printf("add=%f\n",add);
    printf("sub=%f\n",sub);
    printf("mul=%f\n",mul);
    printf("div=%f\n",div);
    printf("mod=%d\n",mod);
    
    
    return 0;
}

    
    




