#include <stdio.h>
int main() {
    double temperature = 0;
    printf("온도를 입력하세요: "); // print가 아닌 printf 사용
    scanf_s("%lf", &temperature); // %d가 아닌 %lf 사용 (double형)
    printf("현재 온도를 섭씨에서 화씨로 전환하면 %.1f도 입니다.\n", temperature * 1.8 + 32); // %d가 아닌 %.1f 사용
    return 0;
}