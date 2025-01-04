//Problem:  Write a function to convert a string to its  shortest palindrome by adding characters at the end
#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    while (1)
    {
        char temp[30];
        printf("Enter string:");
        scanf("%s", str);

        // puts(str);
        int len = 0;
        while (str[len] != '\0')
        {
            len++;
        }
        printf("Length=%d\n", len);
        for (int i = 0; i < len; i++)
        {
            temp[i] = str[len - i - 1];
            // printf("str[%d]=%c\ttemp[%d]=%c\n",len-i,str[len-i],i,temp[i]);
        }
        temp[len] = '\0';

        strcat(str, temp);
        printf("%s\n", str);
        puts(str);
    }
}