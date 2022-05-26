#include<stdio.h>
int is_prime(int n)
{
    int c=0,i;
    for(i=2;i<n/2+1;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    return 1;
    else
    return 0;
}
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=2;i<=n/2+1;i++)
    {
        for(j=2;j<=n/2+1;j++)
        {
            if(i*j==n)
            {
                if(is_prime(i) && is_prime(j))
                {
                    printf("%d %d ",i,j);
                    c=c+1;
                    break;
                }
            }
        }
        if(c==1)
        break;
    }
    if(c==0)
    printf("-1");
}