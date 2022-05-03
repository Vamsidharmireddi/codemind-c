#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n==i*i)
        {
           c++;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    printf("False");
}