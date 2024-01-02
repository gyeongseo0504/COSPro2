#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 함수 선언: 주어진 금액, 가격, 교환 가능한 빈 병의 개수를 토대로 최대한으로 구매 가능한 음료의 수를 계산하는 함수
int solution(int money, int price, int n);

// 메인 함수
int main() {
    // 예시 1
    int money1 = 8;
    int price1 = 2;
    int n1 = 4;
    int ret1 = solution(money1, price1, n1);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    // 예시 2
    int money2 = 6;
    int price2 = 2;
    int n2 = 2;
    int ret2 = solution(money2, price2, n2);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    // 프로그램 종료
    return 0;
}

// 주어진 금액, 가격, 교환 가능한 빈 병의 개수를 토대로 최대한으로 구매 가능한 음료의 수를 계산하는 함수
int solution(int money, int price, int n) {
    int answer = 0;
    int empty_bottle = answer = money / price;

    // 빈 병으로 교환 가능한 횟수가 교환 가능한 빈 병의 개수보다 많을 때까지 반복
    while (n <= empty_bottle) {
        // 교환 가능한 빈 병으로 음료 구매 후, 남은 빈 병 계산
        empty_bottle = empty_bottle - n;
        answer++;
        empty_bottle++;
    }

    // 최종 결과값 반환
    return answer;
}
