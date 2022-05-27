#include<stdio.h>
int main()
{
    int n,temp,c=0;
    scanf("%d",&n);
    temp=n;
    while(n!=1)
    {
        if(n%3==0 || n%5==0 || n%7==0)
        {
            if(n%3==0)
            {
                printf("Pling");
                n=n/3;
            }
            if(n%5==0)
            {
                printf("Plang");
                n=n/5;
            }
            if(n%7==0)
            {
                printf("Plong");
                break;
                n=n/7;
            }
            break;
        }
        else
        {
            c=1;
            printf("%d",temp);
            break;
        }
    }
}