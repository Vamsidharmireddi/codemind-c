#include<stdio.h>
int main()
{
    int r,c,a[100][100],sum=0,i,j;
    scanf("%d%d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==j || i+j==r+1)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d",sum);
}