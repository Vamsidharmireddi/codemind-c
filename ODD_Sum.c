#include<stdio.h>
int main()
{
    int n,i,m,sum=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        if(m%2==1)
        {
            sum=sum+m;
        }
    }
    printf("%d",sum);
}