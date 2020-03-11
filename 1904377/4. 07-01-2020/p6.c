#include <stdio.h>
int main()
{
        int x,last,first,new;
        printf("Enter a 5 digit number");
        scanf("%d",&x);
        last=x%10;
        first=x/10000;
        x=x%10000;
        x=x/10;
        new=(last*10000)+(x*10)+(first);
        printf("The new number is =%d",new);
}
