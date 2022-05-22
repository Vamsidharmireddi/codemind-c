#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[100],s=0,s1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s=s+a[i];
        }
        else
        {
            s1=s1+a[i];
        }
    }
    printf("%d",abs(s-s1));
}