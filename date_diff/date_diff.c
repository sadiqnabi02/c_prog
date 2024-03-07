// counting the difference between two dates

#include<stdio.h>

int main()
{
    int d1,d2,m1,m2,y1,y2,r1,r2,r3;
    printf("Enter the date in format dd/mm/yyyy\n");
    scanf("%d%d%d",&d1,&m1,&y1);
    printf("Enter the current date in format dd/mm/yyyy\n");
    scanf("%d%d%d",&d2,&m2,&y2);


    if((d1>31||d1<1)||(d2>31||d2<1)||(m1>12||m1<1)||(m2>12||m2<1)||(y1<0 || y1<0))
    {
        printf("You have entered wrong date");
    }
    else
    {
        r3=y2-y1;
        if(d2>=d1)
        {
            r1=d2-d1;

        }
        else{
            m2 = m2-1;
            d2 = d2+30;
            r1 = d2-d1;
        }
        if(m2>=m1)
        {
            r2=m2-m1;

        }
        else{
            r3 = r3-1;
            m2 = m2+12;
            r2 = m2-m1;
        }
        printf("Your date diffrence is: %d/%d/%d",r1,r2,r3);
    }


}
