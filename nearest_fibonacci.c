#include<stdio.h>
#include<math.h>
int main()
{
    int n1=0,n2=1,c=0,n,n3,i,a,b;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        n3=n1+n2;
        if(n3>n)
        {
            a=n3;
            b=n2;
            break;
        }
        n1=n2;
        n2=n3;
    }
    //printf("%d %d",a,b);
    if(abs(n-a)>abs(n-b))
    {
        printf("%d",b);
    }
    else if(abs(n-a)==abs(n-b))
    {
        printf("%d %d",b,a);
        
    }
    else
    {
        printf("%d",a);
    }

}