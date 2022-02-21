#include<stdio.h>
int main()
{
    int n,i,j,arr[100],f[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        f[i]=1;
    }
    for(i=0;i<n;i++)
    {
    	if(arr[i]!=0)
    	{		
	       for(j=1;j<=arr[i];j++)
	        {
	        	f[i]=f[i]*j;
	        }
	    }
	}
	    for(i=0;i<n;i++)
	    {
		
	    	 printf("%d
",f[i]);
	    }
	return 0;
}