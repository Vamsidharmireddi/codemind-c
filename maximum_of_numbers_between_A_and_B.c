#include<stdio.h>
int main()
{
    int n,i,a[100],c,b,max=0,z=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&c,&b);
    for(i=1;i<=n;i++)
    {
        if(a[i]>=c && a[i]<=b)
        {
            z=z+1;
            if(max<a[i])
            {
                max=a[i];
            }
        }
    }
    if(z==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
}