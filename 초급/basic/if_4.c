//
// Created by 박민건 on 2022/11/12.
//

#include <stdio.h>

int main(void) {
    char a = 'y';
    scanf("%c",&a);
    if(a=='y') {
        printf("%f", 20000*0.8);
    } else {
        printf("%d",20000);
    }

}