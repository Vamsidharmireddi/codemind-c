#include<stdio.h>
int main()
{
    int n,i,a[100],m,sum=0,avg,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);    
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
       sum=sum+a[i];
    }
    avg=sum/n;
     for(i=0;i<n;i++)
    {
        if(a[i]==avg)
        {
            c++;
        }
    }
    if(c==0)
    printf("False");
    else
    printf("True");
    
    
}