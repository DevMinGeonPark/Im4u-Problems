/* Created by 박민건 on 2022/11/26.
// ------------------------------
// im4u 영재학교 ajit 문제
// 기초 알고리즘 (수학) 07 문제 galbi
// 소수 판멸법 : O(N^1/2)
*/
#include <stdio.h>
#define INPUT "INPUT.txt"
#define OUTPUT "OUTPUT.txt"
#define MAXRANGE 10000

int isPrime(int n);
int main(void) {

    freopen(INPUT, "r", stdin);
    freopen(OUTPUT, "w", stdout);


    int N = 0;
    scanf("%d",&N);

    int arraySize = 0;

    switch (N) {
        case 1:
            arraySize = MAXRANGE/10000;
        case 2:
            arraySize = MAXRANGE/1000;
        case 3:
            arraySize = MAXRANGE/100;
        case 4:
            arraySize = MAXRANGE/10;
        case 5:
            arraySize = MAXRANGE;
//        default:
//            printf("N의 값이 이상합니다.");
//            printf("프로그램을 종료합니다.");
    }

    int PrimeArray[arraySize];



    return 0;
}

int isPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i * i <= n; i+=2)
        if (n % i == 0) return 0;
    return 1;
}
