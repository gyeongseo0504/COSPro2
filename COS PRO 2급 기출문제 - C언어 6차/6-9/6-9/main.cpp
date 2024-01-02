#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 함수 선언: 양말의 쌍을 세는 함수
int solution(int socks[], int socks_len);

// 메인 함수
int main() {
    // 예시
    int socks[] = { 1, 2, 1, 3, 2, 1 };
    int socks_len = 6;
    int ret = solution(socks, socks_len);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    // 프로그램 종료
    return 0;
}

// 양말의 쌍을 세는 함수
int solution(int socks[], int socks_len) {
    int answer = 0;

    // 각 숫자의 개수를 세기 위한 배열 동적 할당 및 초기화
    int* count = (int*)malloc(sizeof(int) * 10);
    memset(count, 0, sizeof(int) * 10);

    // 각 숫자의 개수 세기
    for (int i = 0; i < socks_len; i++)
        count[socks[i]]++;

    // 각 숫자별로 양말 쌍의 개수 계산하여 더하기
    for (int i = 0; i < 10; i++)
        answer += (count[i] / 2);

    // 동적 할당된 배열 메모리 해제
    free(count);

    // 최종 결과값 반환
    return answer;
}
