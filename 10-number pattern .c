#include<stdio.h>
int main()
{
  int i,j,n=1;
  for(i=0;i<4;i++)
  {
     n=1;
    for(j=0;j<7;j++)
    {
      if(j==4&&i==0)
        {
         n=n-2;
         printf("%d",n);
        }

    else if(j>=0&&j<=3-i)
        printf("%d",n++);

     else if(j>=3+i&&j<=6)
         printf("%d",--n);

     else
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}


