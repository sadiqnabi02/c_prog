#include<stdio.h>
#include<string.h>

int main()
{
    char string[1000];
    printf("Enter the string: ");
    gets(string);
    printf("The reversed string is: ");
     for(int i = strlen(string)-1;i>=0;i--)
     {
         printf("%c",string[i]);
     }
}
