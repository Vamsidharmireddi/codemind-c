#include<stdio.h>
int main()
{
    int n,d,temp,arr[100]={0},i,c=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        c=c+1;
        arr[i++]=d;
        n=n/10;
    }
    for(i=c-1;i>=0;i--)
    {
        if(arr[i]==6)
        {
            arr[i]=9;
            break;
        }
    }
    for(i=c-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    
    
    
}