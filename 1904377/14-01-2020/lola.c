#include <stdio.h>
int main()
{
        int a;
        a=2;

xy:
        printf("%d ",a);
        a=a+2;
        if(a<=10)
                goto xy;
        return 0;
}
