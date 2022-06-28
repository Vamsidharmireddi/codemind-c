#include<stdio.h>
int main()
{
    int n,k,sum=0,d;
    scanf("%d",&n);
    k=n*n;
    while(k>0)
    {
        d=k%10;
        sum=sum+d;
        k=k/10;
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