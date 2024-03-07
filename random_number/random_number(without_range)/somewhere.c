#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    system("color 02  ");
    printf("random 1 : %d\n",rand());
    printf("random 2 : %d\n",rand());
    printf("random 3 : %d\n",rand());
    printf("random 4 : %d\n",rand());

}
