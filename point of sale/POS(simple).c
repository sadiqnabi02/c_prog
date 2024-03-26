#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main()
{
    int order,price,qty,total,total_amount,another,cash,change;

do{
    printf("1) Burger----450\n");
    printf("2) Pizza----500\n");
    printf("3) Pasta----400\n");
    printf("4) Drinks----50\n");

    printf("Enter your order number: ");
    scanf("%d",&order);

    switch(order)
    {
    case 1:
        price = 450;
        break;
    case 2:
        price = 500;
        break;
    case 3:
        price = 400;
        break;
    case 4:
        price = 50;
        break;
    }
    printf("Enter quantity: ");
    scanf("%d",&qty);
    total = qty * price;
    printf("Total: %d \n",total);

    total_amount += total;

    printf("Add another order: y/n \n");
    another = getche();
}while(another == 'Y'|| another == 'y');

printf("Current total is: %d",total_amount);

printf("Cash entered: ");
scanf("%d",&cash);

change = cash - total;

printf("Change: %d",change);

}
