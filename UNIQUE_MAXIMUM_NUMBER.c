#include<stdio.h>
int main()
{
    int n,i,j,a[100],c=0,max=0,k=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            c++;
        }
        if(c==1)
        {
            k++;
            arr[k-1]=a[i];
        }
    } 
    if(k==0)
    printf("-1");
    else
    {
     for(i=0;i<k;i++)
     {
        if(arr[i]>max)
        {
             max=arr[i];
          }
      }
      printf("%d",max);
    } 
}