#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 특정 점수 이상인 점수의 개수를 세는 함수
int solution(int scores[], int scores_len, int cutline) 
{
    int answer = 0;

    // 주어진 배열을 순회하며 임계값 이상인 점수의 개수를 세기
    for (int i = 0; i < scores_len; i++) 
    {
        if (scores[i] >= cutline)
            answer++;
    }

    return answer;
}

int main() {
    // 예시로 사용될 점수 배열과 임계값
    int scores[5] = { 80, 90, 55, 60, 59 };
    int scores_len = 5;
    int cutline = 60;

    // solution 함수 호출 결과를 출력
    int ret = solution(scores, scores_len, cutline);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    return 0;
}
