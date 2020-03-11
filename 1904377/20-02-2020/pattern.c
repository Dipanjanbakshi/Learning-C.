#include <stdio.h>
int main()
{
        int x;
        printf("Enter a number even number");
        scanf("%d",&x);
        if(x%2==0)
        {
                for(int i=0; i<x/2; i++)
                {
                        for(int j=0; j<x; j++)
                        {
                                printf(" * ");
                        }
                        printf("\n");
                }
                for(int i=0; i<x/2; i++)
                {
                        for(int j=0; j<x/2; j++)
                        {
                                printf(" * ");
                        }
                        printf("\n");
                }
                for(int i=0; i<x/2; i++)
                {
                        for(int j=0; j<x; j++)
                        {
                                printf(" * ");
                        }
                        printf("\n");
                }
                for(int i=0; i<x/2; i++)
                {
                        for(int k=0; k<x/2; k++)
                        {
                                printf("   ");
                        }
                        for(int j=0; j<x/2; j++)
                        {
                                printf(" * ");
                        }
                        printf("\n");
                }
                for(int i=0; i<x/2; i++)
                {
                        for(int j=0; j<x; j++)
                        {
                                printf(" * ");
                        }
                        printf("\n");
                }
        }
        else
        {
                printf("Invalid input");
        }
}
