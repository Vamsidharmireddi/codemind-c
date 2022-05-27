#include<stdio.h>
#include<math.h>
void is_self(int k)
{
    int i,c=0,d,m=0,temp;
    c=log10(k)+1;
    temp=k;
    while(k>0)
    {
        d=k%10;
        if(d!=0 && temp%d==0)
        {
            m=m+1;
        }
        k=k/10;
    }
    if(m==c)
    {
        printf("%d ",temp);
    }
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        is_self(i);
    }
}