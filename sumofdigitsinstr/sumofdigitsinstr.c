//C program to find out the sum of the digits in a string
#include<stdio.h>
#include<string.h>
#include<ctype.h>



int main()
{
    char string[1000];
    printf("Enter the string with numbers: ");
    gets(string);

    int length = strlen(string);

    int sum = 0;

    for (int i = 0 ; i <length ; i++)

        if(isdigit(string[i]))
    {
        // Converts character to integer and add the sum
        sum += (string[i]-'0');

    }
    printf("The sum is: %d",sum);



}
