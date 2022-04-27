#include<stdio.h>
int main()
{
    int n,i,a[100],c=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            c++;
        }
    }
    printf("%d",c);
}