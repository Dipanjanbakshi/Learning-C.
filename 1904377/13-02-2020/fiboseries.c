#include <stdio.h>
int fiboseries(int x)
{
  if(x==1 || x==2)
  {
    return 1;
  }
  else
  {
    return fiboseries(x-1)+fiboseries(x-2);
  }
}
int main()
{ int z;
  printf("Enter a number upto which you want ro print the fibonacci series-");
  scanf("%d",&z );
  int k;
  printf("The fibonacci series- ");
  for(int i=1;i<=z;i++)
  {
  k=fiboseries(i);
  printf("+%d",k );
}
}
