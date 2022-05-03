#include<stdio.h>
int main()
{
    int arr[100],n,i,a,b,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("%d
",sum);
        sum=0;
    }
}