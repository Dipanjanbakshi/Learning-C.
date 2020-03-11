#include <stdio.h>
int sumofdigits(int x)
{
        if(x/10==0)
        {
                return x;
        }
        else
        {
                return x%10+sumofdigits(x/10);
        }
}
int main()
{
        int z;
        printf("Enter a number");
        scanf("%d",&z );
        int k;
        k=sumofdigits(z);
        printf("The sum of digits is-%d",k );
}
