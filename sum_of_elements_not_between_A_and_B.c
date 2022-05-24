#include<stdio.h>
int main()
{
    int n,i,a[100],c,b,sum=0;
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
            sum=sum+a[i];
        }
    }
    printf("%d",sum);

}