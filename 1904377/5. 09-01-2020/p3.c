#include <stdio.h>
int main()
{
        int x,y;
        printf("Enter two numbers");
        scanf("%d%d",&x,&y);
        if (x>y)
        {printf("The greatest of two numbers is =%d",x);}
        else if (y>x)
        {printf("The greatest of two numbers is =%d",y);}
}
