#include <stdio.h>
int square(int a)
{
        return a*a;
}
int main()
{
        int s,d,k=0;
        printf("How many numbers you want to square- ");
        scanf("%d",&s);
        for(int i=0; i<s; i++)
        {
                printf("Enter the number - ");
                scanf("%d",&d);
                k=square(d);
                printf("Square- %d\n",k);
        }
}
