#include<stdio.h>
int main(){
int a=0,b=1,n,result;
printf("Enter the value of n: ");
scanf("%d",&n);
for(int i = 0; i <= n; i++)
{
    printf("%d ",a);
    result = a+b;
    a = b;
    b = result;
}
}
