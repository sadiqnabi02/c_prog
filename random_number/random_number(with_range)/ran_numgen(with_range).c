//PRINTING RANDOM NUMBER BETWEEN 0 TO 50

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{

    system ("color 02");

    srand(time(NULL));
    for (int i = 0; i <6; i++)
    {
        int random= rand()%30 +1;
        printf("%d\n",random);
    }
}
