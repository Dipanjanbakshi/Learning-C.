#include <stdio.h>
int evenorodd(int *x)
{
        if(*x%2==0)
        {
                return 1;
        }
        else
        {  return 0;}
}
int sumofeven(int *x)
{
        int p=*x,sum=0;
        while(p!=0)
        {
                int z=p%10;
                if(z%2==0)
                {
                        sum=sum+z;
                }
                p=p/10;
        }
        return sum;
}
int sumofodd(int *x)
{
        int p=*x,sum=0;
        while(p!=0)
        {
                int z=p%10;
                if(z%2!=0)
                {
                        sum=sum+z;
                }
                p=p/10;
        }
        return sum;
}
int rev(int *x)
{
        int rev=0,p=*x;
        while(p!=0)
        {
                int z=p%10;
                rev=(rev*10)+z;
                p=p/10;
        }
        return rev;
}
int main()
{
        int x;
        printf("Enter a numbers- \n");
        scanf("%d",&x);
        int *z=&x;
        int a=evenorodd(z);
        int b=sumofeven(z);
        int c=sumofodd(z);
        int d=rev(z);
        if(a==1)
        {
                printf("The number is even. \n");
        }
        else{
                printf("The number is odd.\n");
        }
        printf("Sum of even digits- %d\n",b );
        printf("Sum of odd digits- %d\n",c );
        if(d==x)
        {
                printf("The number is palindrome.\n");
        }
        else
        {
                printf("The number is not palindrome.\n");
        }

}
