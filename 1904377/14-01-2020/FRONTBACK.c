#include <stdio.h>
int  main()
{
        int a=2;
xy:

        printf("%d\n",a);
        a=a+2;
        if(a<=10)
        {
                goto xy;
                printf("\a" );
        }
          printf("\a" );
        return 0;
}
