#include <stdio.h>
int main()
{
        int a; int c=0;
        printf("Enter a number");
        scanf("%d",&a );
        int *b;
        b=&a;
        while(*(b)!=0)
        {
                int p=*(b)%10;
                printf("%d\n", p );
                *(b)=*(b)/10;
                c++;
        }
        printf("no of digits=%d\n", c );
}
