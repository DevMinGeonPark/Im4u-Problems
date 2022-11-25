//
// Created by 박민건 on 2022/11/19.
//
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char a[47] = { "QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./`1234567890-=" }, b[10000];
    gets_s(b);
    for (int j = 0; j < strlen(b); j++) {
        for (int i = 0; i < strlen(a); i++) {
            if (a[i] == b[j]) {
                printf("%c", a[i - 1]);
            }
        }
    }
    return 0;
}
