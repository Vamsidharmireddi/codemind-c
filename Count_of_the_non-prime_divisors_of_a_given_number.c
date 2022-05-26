#include<stdio.h>
int main()
{
    int n,i,c=0,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           if(i==1)
           {
               c++;
           }
           else if(i==n)
           {
               c++;
           }
           else if(i==2)
           {
               continue;
           }
           else
           {
               k=0;
               for(j=2;j<=i/2+1;j++)
               {
                   if(i%j==0)
                   {
                       k=k+1;
                   }
               }
               if(k!=0)
               {
                   c++;
               }
           }
       }
    }
    printf("%d",c);
}