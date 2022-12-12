#include<stdio.h>
int main()
{
    int i,j,s,c=0;
    for(i=0;i<4;i++)
    {
     for(s=0;s<i;s++)
        printf(" ");
        c=1;
        for(j=i;j<=7-i;j++)
        {
           if(j<=6-i)
           {
            printf("%d",c);
                if(j<3)
               c++;

             else
                c--;
           }
        }


        printf("\n");
    }
    return 0;
}
