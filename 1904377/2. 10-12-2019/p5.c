#include <stdio.h>
int main()
{
        float x1,x2,y1,y2,m;
        printf("enter the coordinates");
        scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
        m=(y2-y1)/(x2-x1);
        printf("slope=%f",m);
        return 0;
}
