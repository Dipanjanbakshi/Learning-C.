#include <stdio.h>
int main()
{
        int x, y,z,freq=0;
        printf("Enter a number");
        scanf("%d",&x);
        printf("Enter a number whose frequency you want to find ");
        scanf("%d",&y);
        z=x%10;
        if(z/y==0)
        { freq++;}
        x=x/10;
        if(x==0)
        {printf("THE NUMBER IS USED %d TIMES", freq);}
}
