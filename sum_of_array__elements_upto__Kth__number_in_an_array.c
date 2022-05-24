#include<stdio.h>
int main()
{
    int n,i,a[100],x,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    
}