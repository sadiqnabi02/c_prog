#include<stdio.h>
#include<stdbool.h>
 bool is_prime(int number);
 int main() {
     int number;
     printf("Enter the number: ");
     scanf("%d",&number);
     if (is_prime(number)) printf ("%d is prime\n",number);
     else printf("%d is not prime number",number);
 }
 bool is_prime(int number)
 {
     if(number <=1) return false;
     for (int i = 2 ; i < number; i++)
        if(number % i == 0) return false;
     return true;
 }
