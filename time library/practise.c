
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<unistd.h>

int main(){

time_t  now = time(NULL);


//Delays the time by 2000 millisecond
    printf("%ld\n",now);
    Sleep(0000);

time_t sec = time(NULL);
printf("%ld\n", sec);


// Prints the difference of time.
double diff = difftime(sec,now);
printf("%f\n",diff);

// function to print the now function to human readable
time_t t;
time(&t);
printf("%s",ctime(&t));

struct tm *cur_time= localtime(&now) ;
printf("tm_sec: %d\n",cur_time -> tm_sec);


//Asking for a specific string
char s[100];
strftime(s,100,"%A %B %d",cur_time);
printf("%s \n",s);

}
