#include <stdio.h>
int main()
{
        float a,b,c,d,e,avg=0,total=0;
        printf("Enter marks of 5 subjects");
        scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
        total=a+b+c+d+e;
        avg=total/5;
        printf("the total marks of the student =%f",total);
        printf("the average marks of the student =%f",avg);
}
