#include<stdio.h>
int main()
{
    int n,i,a[100],c,b,sum=0,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&c,&b);
    for(i=1;i<=n;i++)
    {
        if(a[i]<c || a[i]>b)
        {
            k=k+1;
            printf("%d ",a[i]);
        }
    }
    if(k==0)
    {
        printf("-1");
    }

}