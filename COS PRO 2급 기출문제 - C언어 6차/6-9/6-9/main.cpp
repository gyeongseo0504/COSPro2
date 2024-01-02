#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Լ� ����: �縻�� ���� ���� �Լ�
int solution(int socks[], int socks_len);

// ���� �Լ�
int main() {
    // ����
    int socks[] = { 1, 2, 1, 3, 2, 1 };
    int socks_len = 6;
    int ret = solution(socks, socks_len);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

    // ���α׷� ����
    return 0;
}

// �縻�� ���� ���� �Լ�
int solution(int socks[], int socks_len) {
    int answer = 0;

    // �� ������ ������ ���� ���� �迭 ���� �Ҵ� �� �ʱ�ȭ
    int* count = (int*)malloc(sizeof(int) * 10);
    memset(count, 0, sizeof(int) * 10);

    // �� ������ ���� ����
    for (int i = 0; i < socks_len; i++)
        count[socks[i]]++;

    // �� ���ں��� �縻 ���� ���� ����Ͽ� ���ϱ�
    for (int i = 0; i < 10; i++)
        answer += (count[i] / 2);

    // ���� �Ҵ�� �迭 �޸� ����
    free(count);

    // ���� ����� ��ȯ
    return answer;
}
