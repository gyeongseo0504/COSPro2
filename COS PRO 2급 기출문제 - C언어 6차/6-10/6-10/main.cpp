#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 함수 선언: 주어진 무게 범위에 속하지 않는 상자 개수를 계산하는 함수
int solution(int weight, int boxes[], int boxes_len);

// 메인 함수
int main() {
    // 예시
    int weight = 600;
    int boxes[] = { 653, 670, 533, 540, 660 };
    int boxes_len = 5;
    int ret = solution(weight, boxes, boxes_len);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    // 프로그램 종료
    return 0;
}

// 주어진 무게 범위에 속하지 않는 상자 개수를 계산하는 함수
int solution(int weight, int boxes[], int boxes_len) {
    int answer = 0;

    // 각 상자에 대해 주어진 무게 범위에 속하는지 확인하고, 속하지 않으면 answer를 증가시킴
    for (int i = 0; i < boxes_len; i++)
        if (boxes[i] < weight * 0.9 || boxes[i] > weight * 1.1)
            answer++;

    // 최종 결과값 반환
    return answer;
}
