#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,d,rem,r=0,s=0,p,a,x;
    scanf("%d%d",&n,&a);
    x=pow(10,a);
    k=n%x;
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    p=r%x;
    while(p>0)
    {
        rem=p%10;
        s=s*10+rem;
        p=p/10;
    }
    printf("%d",abs(s-k));
}