#include<stdio.h>

int main()
{
    char string[] = "abc";

    char repeat_string[7];

    sprintf(repeat_string,"%s%s",string,string);

    printf("repeat_string: %s\n",repeat_string);
}
