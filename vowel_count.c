#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0,n;
    char str[n];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u')
        {
            c++;
        }
        else if(str[i]=='A' || str[i]=='E' || str[i]=='I' ||str[i]=='O' || str[i]=='U')
        {
            c++;
        }
        
    }
    printf("%d",c);
}