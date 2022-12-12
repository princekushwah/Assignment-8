#include<stdio.h>
int main()
{
    int i,j;
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<=17;j++)
        {

            if(j>=3-i&&j<=6+i||j>=12-i&&j<=15+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=17;j++)
        {
        if(j>0+i&&j<=17-i)
            printf("*");
        else
            printf(" ");
        }
         printf("\n");
    }
    return 0;
}
