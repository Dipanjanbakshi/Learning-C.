#include <stdio.h>
int main()
{
        int a,b,c=0;
        printf("Enter two numbers");
        scanf("%d%d",&a,&b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("Numbers after swaping =%d%d",a,b);
}
