#include<stdio.h>
int main()
{
    int n,m,i,j,count=0;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<m;i++)
    {
    	count=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            printf("%d
",i);
        }
    }
    return 0;
}