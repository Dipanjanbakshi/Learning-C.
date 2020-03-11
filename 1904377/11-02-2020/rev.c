#include <stdio.h>
int rev(int a)
{
        int rev=0,x=a;
        while(x!=0)
        {
                int p=x%10;
                rev=(rev*10)+p;
                x=x/10;
        }
        return rev;
}
int main()
{
        int s;
        int k;
        printf("Enter a number- ");
        scanf("%d",&s);
        k=rev(s);
        printf("rev=%d",k );
}
