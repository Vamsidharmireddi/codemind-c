#include<stdio.h>
int main()
{
    int n,i,a[100],max=0,x,y,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(a[i]<x || a[i]>y)
        {
            if(max<a[i])
            {
                c=c+1;
                max=a[i];
            }
        }
    }
    if(c==0)
    printf("-1");
    else
    printf("%d",max);
}