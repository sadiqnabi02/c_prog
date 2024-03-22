#include<stdio.h>
#include<time.h>
#include<windows.h>
int main()
{
    int seconds;
    printf("Seconds: ");
    scanf("%d",&seconds);

    while(seconds > 0)
    {
        int h = seconds /3600;
        int m = (seconds%3600)/60;
        int s = seconds % 60;
        printf("%02d:%02d:%02d\r",h,m,s);
        Sleep(1000);
        seconds--;
    }
    printf("Time's UP!!");

}
