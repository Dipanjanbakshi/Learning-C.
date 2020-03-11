#include <stdio.h>
int numberof1s(int x)
{
        if(x==0)
        {
                return x;
        }
        else if(x%10==1)
        {
                return 1+numberof1s(x/10);
        }
        else
        {
                return numberof1s(x/10);
        }
}
int main()
{
        int z;
        printf("Enter a number");
        scanf("%d",&z );
        int k;
        k=numberof1s(z);
        printf("The no of 1's is-%d",k );
}
