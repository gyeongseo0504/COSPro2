#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>  // memset 함수를 사용하기 위한 헤더

// 함수 선언: 주어진 배열에서 각 나이 그룹의 인원 수를 계산하여 반환하는 함수
int* solution(int people[], int people_len);

// 메인 함수
int main() {
    // 예시 입력
    int people[] = { 97, 102, 93, 100, 107 };
    int people_len = 5;

    // solution 함수 호출
    int* ret = solution(people, people_len);

    // 결과 출력
    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < 4; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");

    // 동적 할당된 배열 메모리 해제
    free(ret);

    // 프로그램 종료
    return 0;
}

// 주어진 배열에서 각 나이 그룹의 인원 수를 계산하여 반환하는 함수
int* solution(int people[], int people_len) {
    // 결과값을 저장할 배열 동적 할당
    int* answer = (int*)malloc(sizeof(int) * 4);

    // 할당된 배열을 0으로 초기화
    memset(answer, 0, sizeof(int) * 4);

    // 각 나이 그룹의 인원 수 계산
    for (int i = 0; i < people_len; i++) {
        if (people[i] >= 105)
            answer[3]++;
        else if (people[i] >= 100)
            answer[2]++;
        else if (people[i] >= 95)
            answer[1]++;
        else
            answer[0]++;
    }

    // 최종 결과값 반환
    return answer;
}
