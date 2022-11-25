//
// Created by 박민건 on 2022/10/16.
//
#include <stdio.h>

int main(void) {

    int fnum, snum, multiply;
    printf("입력\n");
    scanf("%d %d", &fnum, &snum);
    multiply = fnum * snum;

    while (snum > 0) {
        int tmp = fnum;
        fnum = snum;
        snum = tmp%snum;
    }

    printf("최대 공약 : %d \n",fnum);
    printf("최소 공약 : %d",multiply/fnum);

    return 0;
}