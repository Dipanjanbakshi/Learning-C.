#include <stdio.h>
int fibo(int x)
{
  if(x==1 || x==2)
  {
    return 1;
  }
  else
  {
    return fibo(x-1)+fibo(x-2);
  }
}
int main()
{ int z;
  printf("Enter a number-");
  scanf("%d",&z );
  int k;
  k=fibo(z);
  printf("The %dth fibonacci number is -%d",z,k );
}
