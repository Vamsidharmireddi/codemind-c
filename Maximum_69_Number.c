#include<stdio.h>
int main()
{
    int n,i,d,c=0,a[100]={0};
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        c++;
        a[i++]=d;
        n=n/10;
    }
    for(i=c-1;i>=0;i--)
    {
        if(a[i]==6)
        {
            a[i]=9;
            break;
        }
    }
     for(i=c-1;i>=0;i--)
    {
       printf("%d",a[i]);
    }
}