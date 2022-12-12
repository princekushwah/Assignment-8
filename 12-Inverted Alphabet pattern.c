#include<stdio.h>
int main()
{
    int i,j,s;
    char c='A';
    for(i=0;i<4;i++)
    {
     for(s=0;s<i;s++)
        printf(" ");
        c='A';
        for(j=i;j<=7-i;j++)
        {
           if(j<=6-i)
           {
            printf("%c",c);
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
