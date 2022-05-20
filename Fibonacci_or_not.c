#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3,n,i,c=0;
    scanf("%d",&n);
    c=0;
    for(i=2;i<n;i++)
    {
        n3=n1+n2;
        if(n3==n)
        {
           c=1;
        }
        n1=n2;
        n2=n3;
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}