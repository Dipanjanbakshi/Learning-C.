#include <stdio.h>
int main()
{
        int x,a,b,c,d,e,f,rev;
        printf("Enter a number");
        scanf("%d",&x);
        a=x%10;
        printf("%d",a);
        printf("\n");
        x=x/10;
        b=x%10;
        printf("%d",b);
        printf("\n");
        c=x%10;
        printf("%d",c);
        printf("\n");
        x=x/10;
        d=x%10;
        printf("%d",d);
        printf("\n");
        x=x/10;
        e=x%10;
        printf("%d",e);
        printf("\n");
        x=x/10;
        printf("%d",x);
        printf("\n");
        rev=x+(10*a)+(100*b)+(1000*c)+(10000*d)+(100000*e);
        printf("reverse of the number is =%d",rev);
        return 0;
}
