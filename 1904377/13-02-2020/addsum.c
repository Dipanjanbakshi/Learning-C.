#include <stdio.h>
int sum_prod(int x,int a,int b,int c)
{
        if(x==0)
        {
                return a+b+c;
        }
        if(x==1)
        {
                return a*b*c;
        }
}
int main()
{
        int x,y,z;
        printf("Enter three numbers- \n");
        scanf("%d%d%d",&x,&y,&z );
        int a=sum_prod(0,x,y,z);
        int b=sum_prod(1,x,y,z);
        printf("Sum- %d\n",a );
        printf("Product- %d\n",b );
}
