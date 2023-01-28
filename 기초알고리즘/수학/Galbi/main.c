#include<stdio.h>
#define INPUT "INPUT.txt"
int def(int n)
{
    freopen(INPUT, "r", stdin);
    int i=2,ch=0;
    while(i*i<=n)
    {
        if(n%i==0)
            return 0;
        i+=1;
    }
    if(n>=10)
    {
        n/=10;
        def(n);
    }
    if(n==1)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int n,cnt=10,i,ch=3;
    scanf("%d",&n);
    for(i=1;i<n;i++)
        cnt*=10;
    for(i=cnt/10;i<cnt;i++)
    {
        ch=def(i);
        if(ch==1)
            printf("%d\n",i);
    }
    return 0;
}