#include<stdio.h>
int main()
{
    int n,m,i,sum=0,sum1=0;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m/2;i++)
    {
        if(m%i==0)
        {
            sum=sum+i;
        }
    }
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum1=sum1+i;
        }
    }
    if(sum==n && sum1==m)
    {
        printf("Amicable");
    }
    else
    printf("Not Amicable");
    
}