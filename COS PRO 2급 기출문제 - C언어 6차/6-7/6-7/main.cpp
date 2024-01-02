#include <stdio.h>
#include <stdlib.h>

// 함수 선언: 주어진 금액으로 살 수 있는 가장 비싼 의자와 책상의 조합 가격을 계산하는 함수
int solution(int money, int chairs[], int chairs_len, int desks[], int desks_len);

// 메인 함수
int main() {
    // 예시 1
    int money1 = 7;
    int chairs1[] = { 2, 5 };
    int chairs_len1 = 2;
    int desks1[] = { 4, 3, 5 };
    int desks_len1 = 3;
    int ret1 = solution(money1, chairs1, chairs_len1, desks1, desks_len1);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    // 예시 2
    int money2 = 7;
    int chairs2[] = { 3 };
    int chairs_len2 = 1;
    int desks2[] = { 5 };
    int desks_len2 = 1;
    int ret2 = solution(money2, chairs2, chairs_len2, desks2, desks_len2);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    // 프로그램 종료
    return 0;
}

// 주어진 금액으로 살 수 있는 가장 비싼 의자와 책상의 조합 가격을 계산하는 함수
int solution(int money, int chairs[], int chairs_len, int desks[], int desks_len) {
    int answer = 0;

    // 모든 의자와 책상의 조합에 대해 가장 비싼 조합을 찾음
    for (int i = 0; i < chairs_len; i++) {
        for (int j = 0; j < desks_len; j++) {
            int price = chairs[i] + desks[j];
            if (answer < price && money >= price)
                answer = price;
        }
    }

    // 최종 결과값 반환
    return answer;
}
