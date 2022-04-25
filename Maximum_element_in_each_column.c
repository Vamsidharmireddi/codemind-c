#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c,i,j,a[100][100],max=0;
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
        for(i=1;i<=r;i++)
        {
            if(a[i][j]>max)
            max=a[i][j];
        }
        printf("%d
",max);
        max=0;
    }
    
    
}