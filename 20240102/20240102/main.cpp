#include <stdio.h>

int main() {
    // ��� ���� ũ��
    int size = 11;

    // ���̾Ƹ���� �߽� ��ġ
    int center = size / 2;

    // 2���� �迭 �ʱ�ȭ
    char diamond[11][11];

    // �迭 �ʱ�ȭ
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            diamond[i][j] = ' ';
        }
    }

    // ���̾Ƹ�� ��� '*'�� ä���
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

    // ��� ���
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%c ", diamond[i][j]);
        }
        printf("\n");
    }

    return 0;
}
