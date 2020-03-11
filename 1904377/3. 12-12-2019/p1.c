#include <stdio.h>
int main()
{
        int x,a,b,c,d;
        printf("enter a number");
        scanf("%d", &x);
        a=x & 0XF000;
        b=x & 0X0F00;
        c=x & 0X00F0;
        d=x & 0X000F;
        printf("First byte =%d",a+b);
        printf("Third byte =%d",c+d);
        return 0;
}
