#include <stdio.h>

int main() {
    // 행과 열의 크기
    int size = 11;

    // 다이아몬드의 중심 위치
    int center = size / 2;

    // 2차원 배열 초기화
    char diamond[11][11];

    // 배열 초기화
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            diamond[i][j] = ' ';
        }
    }

    // 다이아몬드 모양 '*'로 채우기
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i <= center) {
                if (j >= center - i && j <= center + i) {
                    diamond[i][j] = '*';
                }
            }
            else {
                if (j >= center - (size - 1 - i) && j <= center + (size - 1 - i)) {
                    diamond[i][j] = '*';
                }
            }
        }
    }

    // 결과 출력
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%c ", diamond[i][j]);
        }
        printf("\n");
    }

    return 0;
}
