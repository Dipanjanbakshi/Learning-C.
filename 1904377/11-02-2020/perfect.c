#include <stdio.h>
int perfect(int a,int b)
{
        int n=0,sum,c=a;
xy:
        sum=0;
        for(int i=1; i<c; i++)
        {
                if(a%i==0)
                {
                        sum=sum+i;
                }
        }
        if(sum==c)
        {
                printf("sum- %d\n",sum );
                n++;
        }
        if(c<b)
        {
                c++;
                goto xy;
        }
        return n;
}
int main()
{
        int u,l,k;
        printf("Enter lower limit- ");
        scanf("%d",&l);
        printf("Enter upper limit- ");
        scanf("%d",&u);
        k=perfect(l,u);
        printf("The number of perfect numbers in the range are- %d",k);
}
