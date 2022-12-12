#include<stdio.h>
int main()
{
    int i,j,c=1;
    for(i=0;i<=3;i++)
    {
        c=1;
        for(j=0;j<=3+i;j++)
        {
            if(j>=3-i)
            {
                printf("%d",c);
             if(j<3)
                c++;
             else
                c--;
            }
            else
                printf(" ");
        }
        printf("\n");

    }
    return 0;
}
