#include<stdio.h>
int adigit(int n)
{
    int d,s=0;
    while(n>0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    if(s<=9)
    {
        printf("%d",s);
    }
    else
    {
        n=adigit(s);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    adigit(n);
}
