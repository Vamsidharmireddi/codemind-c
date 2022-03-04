#include<stdio.h>
int main()
{
    int n,sum=0,d,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    n=temp;
    if(n%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}