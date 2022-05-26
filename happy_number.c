#include<stdio.h>
#include<math.h>
int sdigit(int n)
{
    int d,s=0;
    while(n)
    {
        d=n%10;
        s=s+pow(d,2);
        n=n/10;
    }
    if(s<=9)
    {
        if(s==1 || s==7)
        printf("True");
        else
        printf("False");
    }
    else
    {
        n=sdigit(s);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    sdigit(n);
}