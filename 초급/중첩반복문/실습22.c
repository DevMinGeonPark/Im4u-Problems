//
// Created by 박민건 on 2022/10/02.
//
#include <stdio.h>

int main(void) {

    int N, i, j;
    char apha=65;
    printf("N=");
    scanf("%d",&N);

    for(i=0; i <= N; ++i){
        for(j=0; j <= N - i; ++j) printf(" ");
        for(j=0; j<i*2-1; ++j){
            if(apha==90) apha=65;
            printf("%c",apha++);
        }
        printf("\n");
    }
}