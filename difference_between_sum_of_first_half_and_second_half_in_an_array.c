#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[100],sum=0,sum1=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n/2;i++)
    {
        sum=sum+a[i];
    }
    for(i=n/2+1;i<=n;i++)
    {
        sum1=sum1+a[i];
    }
    printf("%d",abs(sum-sum1));
    
}