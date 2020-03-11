#include <stdio.h>
int main()
{ int x;
  printf("Enter a number odd number");
  scanf("%d",&x);
  if(x%2==0)
  {
    printf("Invalid input");
    }
    else
    {

        for(int i=0;i<x;i++)
        {
          printf(" * ");
        }
        printf("\n");
    }
    for(int i=x/2;i>0;i--)
    {
      for(int j=i;j>0;j--)
      {
      printf(" * ");
    }
    printf("\n");
}
for(int i=0;i<x/2;i++)
{

  printf(" * ");
}
printf("\n");
for(int i=0;i<x;i++)
{
  printf(" * ");
}
printf("\n");
}
