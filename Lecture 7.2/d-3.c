#include<stdio.h>
int main()
{

    int i,j,s;

    for(i=1;i<=5;i++)
    {
        for(s=1;s<=5-i;s++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
       
        for(j=1;i<=i;j++)
        {
            printf("%d ",j);
        } 
        {
            printf("\n");
        }

    }
}