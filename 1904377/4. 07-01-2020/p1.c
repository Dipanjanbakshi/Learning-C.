#include <stdio.h>
int main()
{
        float r;
        float p=0,a=0;
        printf("Enter the radius of the circle");
        scanf("%f",&r);
        p=2*3.14*r;
        a=3.14*r*r;
        printf("The perimeter of the circle is = %f",p);
        printf("The area of the circle is = %f",a);
}
