#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,k;
    scanf("%d",&n);
    m=sqrt(n);
    k=m*m;
    if(k==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}