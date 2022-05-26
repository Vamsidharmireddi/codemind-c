#include<stdio.h>
int main()
{
    int n,i,a[100],d,temp,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        r=0;
        while(a[i]>0)
        {
            d=a[i]%10;
            r=r*10+d;
            a[i]=a[i]/10;
        }
        if(temp==r)
        printf("True
");
        else
        printf("False
");
    }
    
}