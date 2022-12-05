//
// Created by 박민건 on 2022/11/27.
//
#include<stdio.h>
typedef unsigned long long ull;
int n;
ull pow(ull x, ull y, ull p) {
    ull res = 1;
    x %= p;
    while (y > 0) {
        if (y & 1) {
            res *= x;
            res %= p;
        }
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
bool miller_rabin(ull n, ull a) {
    int i;
    ull r = 0;
    ull d = n - 1;
    while (d % 2 == 0) {
        r++;
        d = d >> 1;
    }
    ull x = pow(a, d, n);
    if (x == 1 || x == n - 1) return true;
    for (i = 0; i < r - 1; i++) {
        x = pow(x, 2, n);
        if (x == n - 1)
            return true;
    }
    return false;
}
bool isPrime(ull n) {
    int i;
    ull prime[5] = { 2,3,5,7,11 };
    if (n <= 1)return false;
    if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11)return true;
    if (n % 2 == 0)return false;
    for (i = 0; i < 5; i++) {
        ull a = prime[i];
        if (miller_rabin(n, a) == false)
            return false;
    }
    return true;
}
int main(void) {
    int i, cnt = 0;
    ull target;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lld", &target);
        if (isPrime(2 * target + 1))cnt++;
    }
    printf("%d", cnt);
}
