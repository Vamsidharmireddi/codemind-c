#include<stdio.h>
int main()
{
    int n,m,d,sum=0;
    scanf("%d",&n);
    m=n*n;
    while(m>0)
    {
        d=m%10;
        sum=sum+d;
        m=m/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}