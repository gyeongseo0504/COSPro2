#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 주어진 사다리 정보를 이용하여 게임을 진행하고 최종 도착 지점의 플레이어를 반환하는 함수
int solution(int ladders[][2], int ladders_len, int win)
{
    int answer = 0;

    // 1부터 6까지의 플레이어 배열 초기화
    int player[6] = { 1, 2, 3, 4, 5, 6 };

    // 주어진 사다리 정보를 이용하여 플레이어 이동
    for (int i = 0; i < ladders_len; i++)
    {
        // 현재 사다리의 왼쪽과 오른쪽 위치를 교환하여 플레이어 이동 시뮬레이션
        int temp = player[ladders[i][0] - 1];
        player[ladders[i][0] - 1] = player[ladders[i][0]];
        player[ladders[i][0]] = temp;
    }

    // 최종 도착 지점의 플레이어를 결과값으로 설정
    answer = player[win - 1];

    return answer;
}

int main()
{
    // 사다리 정보를 담은 2차원 배열
    int ladders[5][2] = { {1, 2}, {3, 4}, {2, 3}, {4, 5}, {5, 6} };
    int ladders_len = 5;// 사다리의 개수
    int win = 3;// 최종 도착 지점

    int ret = solution(ladders, ladders_len, win);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    return 0;
}