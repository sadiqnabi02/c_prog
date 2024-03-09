#include<stdio.h>

int main()
{
    int number;
    printf("Enter the positive interger: ");
    scanf("%d",&number);

    if(number <=0)
    {
        printf("Please enter a positive interger\n");

    }
    else
    {
        printf("THe factors of the number %d are: ",number);
        for(int i = 1; i <=number;i++)
            {
                if (number % i == 0)
            printf("%d ",i);
            }
    }
}
