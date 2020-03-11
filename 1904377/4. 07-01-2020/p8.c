#include <stdio.h>
int main()
{
        int a,b,c=0;
        printf("Enter two numbers");
        scanf("%d%d",&a,&b);
        c=a;
        a=b;
        b=c;
        printf("Numbers after swaping =%d%d",a,b);
}
