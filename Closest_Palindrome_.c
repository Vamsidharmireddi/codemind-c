#include<stdio.h>
#include<math.h>
int is_palind(int i)
{
    int temp,d,r=0;
    temp=i;
    while(i>0)
    {
        d=i%10;
        r=r*10+d;
        i=i/10;
    }
    if(temp==r)
    return 1;
    else
    return 0;
}
int main()
{
    int n,d,r=0,i,j,x,y;
    scanf("%d",&n);
    i=1;
    while(1)
    {
        if(is_palind(n+i)==1)
        {
            x=n+i;
            break;
        }
        i++;
    }
    j=-1;
    while(1)
    {
        if(is_palind(n+j)==1)
        {
            y=n+j;
            break;
        }
        j--;
    }
    if(abs(n-x)==abs(n-y))
    printf("%d %d",y,x);
    else if(abs(n-x)>abs(n-y))
    printf("%d",y);
    else
    printf("%d",x);
    
}