//
// Created by 박민건 on 2022/10/02.
//
#include <stdio.h>

int main(void) {

    int n = 0;
    printf("N?");
    scanf("%d",&n);

    for (int i = 0; i <=n; i++) {
        for (int j = 0; j < n ; j++) {
            if(j+i==n) printf(" ");
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
