#include <stdio.h>
int palindrome( int a)
{
        int rev=0,x=a;
        while(x!=0)
        {
                int p=x%10;
                rev=(rev*10)+p;
                x=x/10;
        }
        if(rev==a)
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
        int s,k;
        printf("Enter a number- ");
        scanf("%d",&s);
        k=palindrome(s);
        if(k==1)
        {
                printf("Palindrome Number" );
        }
        else
        {
                printf("Not Palindrome Number");
        }
}
