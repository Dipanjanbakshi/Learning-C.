#include <stdio.h>
int fact(int x)
{
        if(x==1)
        {
                return 1;
        }
        else
        {
                return fact(x-1)*x;
        }
}
int main()
{
        int z;
        printf("Enter a number");
        scanf("%d",&z );
        int k;
        k=fact(z);
        printf("The factorial is-%d",k );
}
