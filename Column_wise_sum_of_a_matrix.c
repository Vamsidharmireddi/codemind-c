#include<stdio.h>
int main()
{
    int r,c,a[100][100],i,j,k;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        k=0;
        for(i=0;i<r;i++)
        {
            k=k+a[i][j];
        }
        printf("%d ",k);
    }
    
}