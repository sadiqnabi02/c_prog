#include<stdio.h>
/*int main(){
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
*/
int fib();
int main()
{
    int n;
    printf("Enter the value of n: ");
    printf("%d",fib(n));

}
int fib()
{
    int a=0,b=1,n,result;
     scanf("%d",&n);
     for(int i = 0; i <= n ; i++)
     {
         printf("%d ",a);
         result = a+b;
         a =b ;
         b =result;
     }
     return n;
}
