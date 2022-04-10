#include<stdio.h>
int main()
{
    int n,a[100],l,m,i,j,c=0,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&l,&m);
        for(j=l;j<=m;j++)
        {
            k=j%10;
            if(k==2)
            {
                c++;
            }
            else if(k==3)
            {
                c++;
            }
            else if(k==9)
            {
                c++;
            }
        }
        printf("%d
",c);
        c=0;
    }
}