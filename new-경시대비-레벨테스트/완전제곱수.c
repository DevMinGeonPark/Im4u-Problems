#include <stdio.h>
int main (void) {
    unsigned int N, count=0;
    scanf("%d", &N);
    for (unsigned int A = 1; A <=500; A++)
        for (unsigned int B = 1; (B <=500 && B<A); B++)
            if(N==A*A-B*B) count++;
    printf("%d",count);
    return 0;
}
