#include<stdio.h>
#include<stdbool.h>

int main()
{
    double amount,balance;
    int choice;

    while(true)
    {
        printf("1) Deposite\n");
        printf("2) Withdraw\n");
        printf("3) Balance\n");
        printf("4) Show Balance and Quit\n");
        printf("5) Quit\n");
        printf("Enter your choice: \n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter your amount: ");
            scanf("%lf",&amount);
            balance += amount;
            printf("You have entered %lf\n",amount);
            break;
        case 2:
            printf("Withdraw Amount: ");
            scanf("%lf",&amount);
            balance -= amount;
            printf("You have withdrawn %lf\n",amount);
        case 3:
            printf("The Balance is: %lf\n",balance);
            break;
        case 4:
            printf("The Balance is: %lf\n",balance);
        case 5:
            exit(0);
        }
    }
}
