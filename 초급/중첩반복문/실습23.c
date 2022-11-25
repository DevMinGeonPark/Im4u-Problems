//
// Created by 박민건 on 2022/10/02.
//
#include <stdio.h>

int main(void) {

    int N;

    printf("N:");
    scanf("%d", & N);

    for (int i = 0; i < N; i++) {
        int j;
        for (j = 0; j <= i; j++)
            printf("*");
        for (j = 0; j < N - i - 1; j++)
            printf("  ");
        for (j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}