#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    m=sqrt(n);
    if(n==m*m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}