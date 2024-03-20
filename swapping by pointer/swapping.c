
#include<stdio.h>


int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d & %d\n", x,y);
    swap(&x,&y);


}


void swap(int *a, int *b)
{
    int temp;
    temp  = *a;
    *a = *b;
    *b = temp;
printf("%d \n%d",*a,*b);
}
