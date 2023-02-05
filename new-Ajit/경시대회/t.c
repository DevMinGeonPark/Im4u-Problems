#include<stdio.h>
#include<string.h>
int main()
{

    int min=0,max=10,m,len,dab;
    char a[100];
    while(1)
    {
        scanf("%d",&m);
        gets(a);
        len=strlen(a);

        if(a[len-1]=='h' && max>m)
            max=m;
        else if(a[len-1]=='w' && min<m)
            min=m;
        else if(a[len-1]=='n')
        {
            dab=m;
            break;
        }

    }

    if((max>dab && dab>min))
        printf("Stan may be honest");
    else
        printf("Stan is dishonest");
}