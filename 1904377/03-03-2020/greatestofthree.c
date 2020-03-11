#include <stdio.h>
int greatest(int *a,int *b,int *c)
{
        int *x=0;
        if(*(&a)<*(&b)&&*(&a)<*(&c))
        {
                x=a;
        }
        else
        if(*(&b)<*(&a)&&*(&b)<*(&c))
        {
                x=b;
        }
        else
        {
                x=c;
        }
        return *x;
}
int greater(int *a,int *b,int *c)
{
  int k=greatest(*&a,*&b,*&c);
        int *x=0;
        if(k==*a)
        {
          if(*(&b)<*(&c))
          {
                  x=b;
          }
          else
          {
                  x=c;
          }
          }
          if(k==*b)
          {
            if(*(&a)<*(&c))
            {
                    x=a;
            }
            else
            {
                    x=c;
            }
            }
            else
            {
              x=c;
            }

        return *x;
}

int main()
{
        int a,b,c;
        printf("Enter 3 numbers");
        scanf("%d%d%d",&a,&b,&c );
        int k=greatest(&a,&b,&c);
        int z=greater(&a,&b,&c);
        printf("The greatest number is- %d\n",k);
        printf("The middle number is- %d\n",z);

}
