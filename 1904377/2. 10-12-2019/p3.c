#include <stdio.h>
#include <math.h>
int main()
{
        float b,p,h=0,sum;
        printf("Enter the base");
        scanf("%f",&b);
        printf("Enter the perpendicular");
        scanf("%f",&p);
        b=b*b;
        p=p*p;
        sum=b+h;
        h=sqrt(sum);
        printf("the hypotenuse is = %f",h);
        printf("\n");
        return 0;
}
