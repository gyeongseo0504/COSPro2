#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 함수 선언: 태권도, 러닝, 사격 성적을 받아 최종 점수를 계산하는 함수
int solution(int taekwondo, int running, int shooting[], int shooting_len);

// 메인 함수
int main() {
    // 태권도 점수
    int taekwondo = 27;
    // 러닝 시간
    int running = 63;
    // 사격 성적 배열
    int shooting[] = { 9, 10, 8, 10, 10, 10, 7, 10, 10, 10 };
    // 사격 성적 배열의 길이
    int shooting_len = 10;

    int ret = solution(taekwondo, running, shooting, shooting_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    return 0;
}

// 태권도, 러닝, 사격 성적을 받아 최종 점수를 계산하는 함수
int solution(int taekwondo, int running, int shooting[], int shooting_len) {
    // 최종 점수를 저장할 변수
    int answer = 0;

    // 태권도 점수가 25 이상이면 250점을 더하고, 그렇지 않으면 태권도 점수의 8배를 더함
    if (taekwondo >= 25)
        answer += 250;
    else
        answer += taekwondo * 8;

    // 러닝 시간에 따라 점수를 더함
    answer += 250 + (60 - running) * 5;

    // 사격 성적을 순회하면서 점수를 더하고, 만약 10점을 받은 횟수가 7회 이상이면 100점을 추가로 더함
    int count = 0;
    for (int i = 0; i < shooting_len; i++) {
        answer += shooting[i];
        if (shooting[i] == 10)
            count++;
    }
    if (count >= 7)
        answer += 100;

    return answer;
}
