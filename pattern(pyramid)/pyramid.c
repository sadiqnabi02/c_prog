#include<stdio.h>

int main()

{
    system("color 72");
    int n,k,z=1;
    char ch;
    scanf("%d %c",&n,&ch);
    for(int i =1; i <=n ; i++)
    {
        for(int j = n-1; j>=i;j--)
        {
            printf(" ");
        }
        for(k =1 ; k <=z;k++)
        {
            printf("%c",ch);
        }
        z += 2;
        printf("\n");
    }
}
