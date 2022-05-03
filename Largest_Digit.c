#include<stdio.h>
int main()
{
    int n,d,max=0;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        if(max<d)
        {
            max=d;
        }
        n=n/10;
    }
    printf("%d",max);
}