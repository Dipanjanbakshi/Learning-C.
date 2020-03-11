#include <stdio.h>
int prime_composite(int a)
{
        int c=0;
        for(int i=2; i<a; i++)
        { if(a%i==0)
          {
                  c++;
          }}
        if(c==0)
        {
                return 1;
        }
        else
        {
                return 0;
        }
}
int main()
{
        int n,k;
        printf("Enter a number- ");
        scanf("%d",&n);
        k=prime_composite(n);
        if(k==1)
        {
                printf("Prime Number" );
        }
        else
        {
                printf("Composite Number");
        }
}
