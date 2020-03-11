#include <stdio.h>
int  main()
{
        int a;
        a=5;
        int *b;
        b=&a;
        printf("%p\n", b );
        float c;
        c=5;
        float *d;
        d=&c;
        printf("%p\n", d );
        double e;
        e=5;
        double *f;
        f=&e;
        printf("%p\n", f );
}
