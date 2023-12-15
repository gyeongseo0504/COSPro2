#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 꼭짓점에 위치한 지형의 수를 세는 함수
int solution(int height[][4], int height_len) {
    int count = 0;

    // 2차원 배열을 순회하며 꼭짓점에 위치한 지형을 찾음
    for (int i = 0; i < height_len; i++) {
        for (int j = 0; j < height_len; j++) {
            // 꼭짓점에 위치한 지형인지 확인
            if (height[i][j] < height[i][j - 1] && height[i][j] < height[i + 1][j] &&
                height[i][j] < height[i][j + 1] && height[i][j] < height[i - 1][j]) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    // 4x4 크기의 배열
    int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
    int height_len = 4;

    int ret = solution(height, height_len);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    return 0;
}
