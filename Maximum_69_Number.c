#include<stdio.h>
int main()
{
    int n,k,d,c=0,a[100]={0};
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        c++;
        a[k++]=d;
        n=n/10;
    }
    for(k=c-1;k>=0;k--)
    {
        if(a[k]==6)
        {
            a[k]=9;
            break;
        }
    }
    for(k=c-1;k>=0;k--)
    {
        printf("%d",a[k]);
    }
}