//
// Created by 박민건 on 2022/10/23.
//
#include<stdio.h>
#define INPUT "INPUT.txt"
#define OUTPUT "OUTPUT.txt"

int main()
{
    freopen(INPUT, "r", stdin);
    freopen(OUTPUT, "w", stdout);

    int b,d,n,i,j;
    int a[1000][1000] = {0};
    scanf("%d %d %d",&b ,&d ,&n);
    for(i=0;i<b;i++){
        for(j=0;j<d;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]<=n+1)
                a[i][j]=-1;
        }
    }
    for(i=0;i<b;i++){
        for(j=0;j<d;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}