#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>


int h=0;m=0;s=0;flag=0;

void delay(ms)
{
    clock_t timedelay = ms + clock();

    while(timedelay > clock());
}

int counter(){
while(!kbhit() && flag ==0)
{
    if(m>59){
            m =0;++h;
    }
    if(s>59){
            s=0; ++m;
    }
    printdata();
    delay(1000);
    ++s;
}

int printdata(){
system("cls");

printf("1.Start  2.Stop  3.Reset  4.End\n");
printf("    %d:%d:%d",h,m,s);
}
int main()
{
    counter();
    printdata();
    return 0;
}
