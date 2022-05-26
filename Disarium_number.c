#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,c=0,p,s=0,k;
    scanf("%d",&n);
    p=n;
    k=n;
    while(n>0)
    {
        d=n%10;
        c=c+1;
        n=n/10;
    }
    //printf("%d",c);
    while(p>0)
    {
        d=p%10;
        s=s+pow(d,c);
        p=p/10;
        c=c-1;
    }
    //printf("%d",s);
    if(k==s)
    printf("True");
    else
    printf("False");
}