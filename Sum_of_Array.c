#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[100],s1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s1=s1+a[i];
    }
    printf("%d",s1);
}