#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char string[100];
    printf("Please enter a string : ");
    gets(string);

    int length =  strlen(string);
    int count = 0;
    for (int i = 0; i<length; i++)
    {
        if(isspace(string[i])){
            count++;
        }
    }
    printf("Total whitespace is: %d\n",count);
}
