#include<stdio.h>
int main()
{
    int n,i,a[100],c=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        c=1;
        while(a[i]!=0)
        {
            d=a[i]%10;
            c++;
            a[i]=a[i]/10;
        }
        printf("%d ",c);
        c=0;
    }
}