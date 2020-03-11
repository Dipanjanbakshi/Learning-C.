#include <stdio.h>
int main()
{
        int sec,hours,min,h1,m1,s1,h2,m2,s2;
        printf("Enter first hours and mins");
        scanf("%d%d",&h1,&m1);
        s1=(h1*3600)+(m1*60);
        printf("Enter second hours and mins");
        scanf("%d%d",&h2,&m2);
        s2=(h2*3600)+(m2*60);
        sec=s2-s1;
        hours=sec/3600;
        sec=sec-(hours*3600);
        min=sec/60;
        sec=sec-(min*60);
        printf("The difference in hours is=%d",hours);
        printf("The difference in min is=%d",min);
        printf("The difference in sec is=%d",sec);
}
