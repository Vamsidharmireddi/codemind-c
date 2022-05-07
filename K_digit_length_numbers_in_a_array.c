#include<stdio.h>
int main()
{
    int n,i,a[100],m,c=0,k=0,d;
    scanf("%d%d",&n,&m);
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
            c=c+1;
            a[i]=a[i]/10;
        }
        if(c==m)
        {
            k=k+1;
        }
        c=0;
    }
    printf("%d",k);
}