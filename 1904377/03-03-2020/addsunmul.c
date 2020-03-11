#include <stdio.h>
int addsumul(int *a,int*b,int*m,int*n,int*o)
{
        int c=*a+*b;
        *m=c;
        int d=*a**b;
        *n=d;
        float e=*a/(*b);
        *o=e;
        return 0;
}
int main()
{
        int a,b,m,n,o;
        printf("Enter 2 numbers");
        scanf("%d%d",&a,&b);
        addsumul(&a,&b,&m,&n,&o);
        printf("%d\n%d\n%d\n",m,n,o);
}
