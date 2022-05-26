#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c,i,j,a[100][100],s=0,max=0;
    scanf("%d%d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=1;j<=c;j++)
    {
        s=0;
        for(i=1;i<=r;i++)
        {
            s=s+a[i][j];
        }
        if(max<s)
        {
            max=s;
        }
    }
    printf("%d",max);
}