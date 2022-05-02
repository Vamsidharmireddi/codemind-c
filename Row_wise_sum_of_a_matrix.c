#include<stdio.h>
int main()
{
    int r,c,i,sum=0,a[100][100],j;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           sum=sum+a[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
}