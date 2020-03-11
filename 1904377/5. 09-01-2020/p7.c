#include <stdio.h>
int main()
{
        int x,y,z, max, min;
        printf("Enter three numbers");
        scanf("%d%d%d",&x,&y,&z);
        if (x>y&&x>z)
        {max=x;}
        else if (y>x && y>z)
        {max=y;}
        else
        {max=z;}
        if (x<y&&x<z)
        {min=x;}
        else if (y<x && y<z)
        {min=y;}
        else
        {min=z;}
        if(x==min && y==max)
        {printf("%d",z);}
        if(x==max && y==min)
        {printf("%d",z);}
        if(x==min && z==max)
        {printf("%d",y);}
        if(x==max && y==min)
        {printf("%d",y);}
        if(z==min && y==max)
        {printf("%d",x);}
        if(y==min && z==max)
        {printf("%d",x);}
}
