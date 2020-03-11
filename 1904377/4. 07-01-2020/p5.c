#include <stdio.h>
int main()
{
        int sec,hours,min;
        printf("Enter time in seconds");
        scanf("%d",&sec);
        hours=sec/3600;
        sec=sec-(hours*3600);
        min=sec/60;
        sec=sec-(min*60);
        printf("The time in hours is=%d",hours);
        printf("The time in min is=%d",min);
        printf("The time in sec is=%d",sec);
}
