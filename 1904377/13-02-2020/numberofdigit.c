#include <stdio.h>
int numberofdigits(int x)
{
        if(x==0)
        {
                return x;
        }
        else
        {
                return 1+numberofdigits(x/10);
        }
}
int main()
{
        int z;
        printf("Enter a number");
        scanf("%d",&z );
        int k;
        k=numberofdigits(z);
        printf("The number of digits is-%d",k );
}
