#include<stdio.h>
#include<time.h>
#include<unistd.h>

int main()
{
    time_t currenttime;
    struct tm *localTime;

    while(1)
    {
        currenttime = time(NULL);
        localTime = localtime(&currenttime);
        printf("                                                       %02d:%02d:%02d\r",localTime->tm_hour,localTime->tm_min,localTime->tm_sec);
        fflush(stdout);
     sleep(1)   ;
    }
}
