#include<stdio.h>
int main()
{
    int n,i,a[100],sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]%2==1)
        {
            break;
        }
        sum=sum+a[i];
    }
    printf("%d",sum);
    
}