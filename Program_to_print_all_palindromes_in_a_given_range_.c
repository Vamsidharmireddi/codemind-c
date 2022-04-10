#include<stdio.h>
int reverse(int i)
{
    int rev=0,d;
    while(i>0)
    {
        d=i%10;
        rev=rev*10+d;
        i=i/10;
    }
    return rev;
}
int main()
{
    int i,rev,m,n;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
		rev=reverse(i);
	    if(rev==i)
	    {
	    	printf("%d ",i);
		}
	}
}