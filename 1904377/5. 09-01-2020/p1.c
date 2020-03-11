#include <stdio.h>
int main()
{
        float a,b,c,d,e,avg=0,total=0;
        printf("Enter marks of 5 subjects");
        scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
        total=a+b+c+d+e;
        avg=total/5;
        if (avg>=90)
        {printf("O grade");}
        else if (avg>=80 && avg<90)
        {printf("E grade");}
        else if (avg>=70 && avg<80)
        {printf("A grade");}
        else if (avg>=60 && avg<70)
        {printf("B grade");}
        else if (avg>=50 && avg<60)
        {printf("C grade");}
        else if (avg>=60 && avg<50)
        {printf("D grade");}
        else { printf("FAIL");}
}
