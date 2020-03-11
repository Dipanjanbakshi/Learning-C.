#include <stdio.h>
#include <math.h>
int compute(int a)
{
        double x=0;
        x=pow(-1,a);
        return x;
}
int  main()
{
        int z,k;
        printf("Enter upto which number u want to print the series- ");
        scanf("%d",&z);
        for(int i=1; i<=z; i++)
        {k=compute(i);

         if (k==1)
         {
                 printf("x^%d+%d/%d! + ",i,k,i );
         }
         else
         {
                 printf("x^%d%d/%d!  ",i,k,i );
         }}
        return 0;
}
