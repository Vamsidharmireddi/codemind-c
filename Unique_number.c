#include<stdio.h>
int main()
{
    int n,i,d,a[100]={0},c=0,k=0,j;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        c=c+1;
        a[i++]=d;
        n=n/10;
    }
    for(i=c-1;i>=0;i--)
    {
        for(j=c-1;j>=0;j--)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    k=1;
                    printf("Not Unique Number");
                    break;
                }
            }
        }
        if(k==1)
            break;
    }
    if(k==0)
    {
        printf("Unique Number");
    }
}