#include <stdio.h>
int add_n(int a,int b)
{
        return a+b;
}
int main()
{
        int s,d,k=0;
        printf("How many numbers do you want to add- ");
        scanf("%d",&s);
        for(int i=0; i<s; i++)
        {
                printf("Enter a number- ");
                scanf("%d",&d);
                k=add_n(k,d);
        }
        printf("The sum of the numbers is- %d",k);
}
