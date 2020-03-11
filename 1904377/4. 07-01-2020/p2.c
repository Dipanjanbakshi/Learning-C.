#include <stdio.h>
int main()
{
        float l,b,a=0,p=0;
        printf("Enter length");
        scanf("%f", &l);
        printf("Enter width");
        scanf("%f", &b);
        a=l*b;
        p=2*(l+b);
        printf("the perimeter of the rectangle is = %f",p);
        printf("the area of the rectangle is = %f",a);
}
