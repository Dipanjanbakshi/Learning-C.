#include <stdio.h>
int factseries(int x)
{
        if(x==1)
        {
                return 1;
        }
        else
        {
                return factseries(x-1)*x;
        }
}
int main()
{
        int z;
        printf("Enter a number upto which you want to print the factorial series-");
        scanf("%d",&z );
        int k;
        printf("The factorial series- 0");
        for(int i=1; i<=z; i++)
        {
                k=factseries(i);
                printf("+%d",k );
        }
}
