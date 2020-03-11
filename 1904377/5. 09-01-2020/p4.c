#include <stdio.h>
int main()
{
        int x,y,z;
        printf("Enter three numbers");
        scanf("%d%d%d",&x,&y,&z);
        if (x>y&&x>z)
        {printf("The greatest of two numbers is =%d",x);}
        else if (y>x && y>z)
        {printf("The greatest of two numbers is =%d",y);}
        else
        {printf("The greatest of two numbers is =%d",z);}
}
