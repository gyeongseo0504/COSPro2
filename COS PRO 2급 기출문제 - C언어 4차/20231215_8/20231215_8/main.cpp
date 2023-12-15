#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 후보자 번호 배열에서 과반수 이상 투표 받은 후보자 번호를 반환하는 함수
int solution(int n, int votes[], int votes_len) {
    int arr[101] = { 0, };

    // 투표 배열을 순회하며 각 후보자의 투표 수를 누적
    for (int i = 0; i < votes_len; i++) {
        arr[votes[i]]++;
    }

    // 각 후보자의 투표 수를 검사하여 과반수 이상인 후보자 번호를 찾음
    for (int i = 1; i < n + 1; i++)
        if (arr[i] > votes_len / 2)  // 과반수는 투표한 인원의 과반수이어야 올바른 값이 나온다.
            return i;

    // 과반수 이상인 후보자가 없을 경우 -1 반환
    return -1;
}

int main() {
    int n1 = 3;
    int votes1[7] = { 1, 2, 1, 3, 1, 2, 1 };
    int votes_len1 = 7;
    int ret1 = solution(n1, votes1, votes_len1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int n2 = 2;
    int votes2[7] = { 2, 1, 2, 1, 2, 2, 1 };
    int votes_len2 = 7;
    int ret2 = solution(n2, votes2, votes_len2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}
