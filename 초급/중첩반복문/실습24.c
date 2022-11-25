//
// Created by 박민건 on 2022/10/01.
// im4u 문제집에서 빈출 유행을 답지 겸 작성
// 모든 내용은 C99 표준과 Clang 컴파일러에 의해 작성되었음.
//
#include <stdio.h>

int main(void) {

    int n = 0;
    printf("N?");
    scanf("%d",&n);

    for (int i = 0; i <=n; i++) {
        for (int j = 0; j < n ; j++) {
            if(i==j) printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}