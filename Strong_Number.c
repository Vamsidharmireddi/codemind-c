#include<stdio.h>
int main()
{
    int n,i,product,sum=0,d,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
    	i=1;product=1;
        d=n%10;
        while(i<=d)
        {
                product=product*i;
                i++;
        }
        sum=sum+product;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
    return 0;
}    