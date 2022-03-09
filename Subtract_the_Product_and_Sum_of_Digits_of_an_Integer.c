#include<stdio.h>
int main()
{
    int n,d,f=1,sum=0,res;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        f=f*d;
        sum=sum+d;
        n=n/10;
    }
    res=(f-sum);
    printf("%d",res);
}