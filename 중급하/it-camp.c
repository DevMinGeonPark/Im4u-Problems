//
// Created by 박민건 on 2022/11/05.
//
#include <stdio.h>
#include <string.h>
int main(void) {
    char a[20] = "fhuj.mhmxqx.df.nu";
    for (int i = 0; i < strlen(a); i++) {
        printf("%s",&a[i]);
//        if(&a[i]==".") continue;
        a[i] -= 3;
    }
    printf("%s",a);
    
}
