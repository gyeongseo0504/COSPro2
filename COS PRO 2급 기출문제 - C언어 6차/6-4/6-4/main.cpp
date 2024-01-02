#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 함수 선언: 주어진 카드 정보에서 점수를 계산하여 반환하는 함수
int solution(const char* cards[][2], int cards_len);

// 메인 함수
int main() {
    // 예시 1
    const char* cards1[][2] = { {"blue", "2"}, {"red", "5"}, {"black", "3"} };
    int cards_len1 = 3;
    int ret1 = solution(cards1, cards_len1);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    // 예시 2
    const char* cards2[][2] = { {"blue", "2"}, {"blue", "5"}, {"black", "3"} };
    int cards_len2 = 3;
    int ret2 = solution(cards2, cards_len2);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    // 프로그램 종료
    return 0;
}

// 주어진 카드 정보에서 점수를 계산하여 반환하는 함수
int solution(const char* cards[][2], int cards_len) {
    int answer = 0;
    int cnt[3] = { 0 };

    // 카드 정보를 순회하면서 점수와 색상 개수를 계산
    for (int i = 0; i < cards_len; i++) {
        // 색상에 따라 개수 증가 및 점수 누적
        if (strcmp(cards[i][0], "blue") == 0)
            cnt[0]++;
        else if (strcmp(cards[i][0], "red") == 0)
            cnt[1]++;
        else if (strcmp(cards[i][0], "black") == 0)
            cnt[2]++;

        answer += atoi(cards[i][1]);
    }

    // 색상 개수에 따라 점수 조정
    for (int i = 0; i < 3; i++) {
        if (cnt[i] == 3) {
            answer *= 3;
            break;
        }
        else if (cnt[i] == 2) {
            answer *= 2;
            break;
        }
    }

    // 최종 결과값 반환
    return answer;
}
