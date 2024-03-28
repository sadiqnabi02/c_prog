#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>

bool passver(char *pass);
int main()
{
    printf("Enter a password which meets the following conditions:\n1) Must have atleast 8 characters\n2) Must have 1 upper case \n3) must have 1 lower case \n4) Must have one special character\n");
    char pass[30];
    printf("Enter the password: ");
    scanf("%s",&pass);

    bool result  = passver(pass);
    if (result) printf("Valid password");
    else printf("Invalid password");
}


bool passver(char *pass)
{
    int length = strlen(pass);
    if(length <8) return false;
    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool symbol = false;

    for (int i = 0;i< length;i++ )
    {
        if(isupper(pass[i]))upper = true;
        if(islower(pass[i]))lower = true;
        if(isdigit(pass[i]))digit = true;
        if(ispunct(pass[i]))symbol = true;
    }
    if(!upper) return false;
    if(!lower) return false;
    if(!symbol) return false;
    if(!digit) return false;

    return true;
}
