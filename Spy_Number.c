#include<stdio.h>
int main()
{
    int n,i,sum=0,product=1,d;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        product=product*d;
        n=n/10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}