#include<stdio.h>
int main()
{
    int n,i,a[100],temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            temp=a[i];
        }
    }
    printf("%d",temp);
}