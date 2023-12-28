#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 함수 선언: 주어진 속도와 차량 속도 배열을 이용하여 벌금을 계산하는 함수
int solution(int speed, int cars[], int cars_len);

// 메인 함수
int main() {
    // 기준 속도
    int speed = 100;
    // 차량 속도 배열
    int cars[] = { 110, 98, 125, 148, 120, 112, 89 };
    // 차량 수
    int cars_len = 7;

    int ret = solution(speed, cars, cars_len);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    return 0;
}

// 주어진 속도와 차량 속도 배열을 이용하여 벌금을 계산하는 함수
int solution(int speed, int cars[], int cars_len) {
    // 최종 벌금을 저장할 변수
    int answer = 0;

    // 차량 배열을 순회하면서 속도 구간에 따라 벌금을 계산
    for (int i = 0; i < cars_len; i++) {
        // 속도 구간에 따라 벌금을 부여하고 누적
        if (cars[i] >= speed * 11 / 10 && cars[i] < speed * 12 / 10)
            answer += 3;
        else if (cars[i] >= speed * 12 / 10 && cars[i] < speed * 13 / 10)
            answer += 5;
        else if (cars[i] >= speed * 13 / 10)
            answer += 7;
    }

    return answer;
}
