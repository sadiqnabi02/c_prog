#include<stdio.h>

int main()
{
    int code,quantity,price,total,totalamount;
    char another;
    do {
    printf("Welcome to Pizzaburger\n\n");
    printf("   Items:    Prices:\n");
    printf("1. Burger   450\n");
    printf("2. Pizza    350\n");
    printf("3. Cola     20   \n");
    printf("4. Water    Free\n");

    printf("Enter Item Code: ");
    scanf("%d",&code);
    printf("Enter the quatity: ");
    scanf("%d",&quantity);

    switch(code)
    {
        case 1: price = 450;
        break;
        case 2: price = 350;
        break;
        case 3: price = 20;
        break;
        case 4: price = 0;
        break;
    }
    total = quantity * price;
    printf("Total: %d \n",total);

    totalamount = total + totalamount;

    printf("Add another order? Press Y/y");
     another = getche();
}
     while (another == 'y' || 'Y');

      printf("Total Amount is: %d",totalamount);




}
