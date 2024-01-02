#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 함수 선언: 주어진 논문 배열에서 조건을 만족하는 최소 길이를 계산하여 반환하는 함수
int solution(int papers[], int papers_len, int K);

// 메인 함수
int main() {
    // 예시 1
    int papers1[] = { 2, 4, 3, 2, 1 };
    int papers_len1 = 5;
    int K1 = 10;
    int ret1 = solution(papers1, papers_len1, K1);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    // 예시 2
    int papers2[] = { 2, 4, 3, 2, 1 };
    int papers_len2 = 5;
    int K2 = 14;
    int ret2 = solution(papers2, papers_len2, K2);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    // 프로그램 종료
    return 0;
}

// 주어진 논문 배열에서 조건을 만족하는 최소 길이를 계산하여 반환하는 함수
int solution(int papers[], int papers_len, int K) {
    // 초기 길이를 전체 논문의 길이로 설정
    int length = papers_len;

    // 논문 배열을 순회하면서 길이를 조절
    for (int i = 0; i < papers_len; i++) {
        // 현재 논문의 길이를 K에서 차감
        K -= papers[i];

