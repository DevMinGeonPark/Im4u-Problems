//
// Created by 박민건 on 2022/10/02.
//
//두 점 사이의 거리 공식 코드
#include <stdio.h>
#include <math.h>

double dist_2d(double x1, double y1, double x2, double y2);
int main(void)
{
    double x1, y1, x2, y2;

    printf("첫 번째 점의 x,y : ");
    scanf("%lf %lf", &x1, &y1);

    printf("두 번째 점의 x,y : ");
    scanf("%lf %lf", &x2, &y2);

    printf("거리: %f\n", dist_2d(x1, y1, x2, y2));
    return 0;
}
double dist_2d(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}