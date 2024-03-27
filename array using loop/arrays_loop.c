#include<stdio.h>

int main()
{

  int prices[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

  for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)

  {
      printf("The prices are: %02d\n",prices[i]);
  }
}
