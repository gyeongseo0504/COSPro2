#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>  // memset �Լ��� ����ϱ� ���� ���

// �Լ� ����: �־��� �迭���� �� ���� �׷��� �ο� ���� ����Ͽ� ��ȯ�ϴ� �Լ�
int* solution(int people[], int people_len);

// ���� �Լ�
int main() {
    // ���� �Է�
    int people[] = { 97, 102, 93, 100, 107 };
    int people_len = 5;

    // solution �Լ� ȣ��
    int* ret = solution(people, people_len);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� [");
    for (int i = 0; i < 4; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", ret[i]);
    }
    printf("] �Դϴ�.\n");

    // ���� �Ҵ�� �迭 �޸� ����
    free(ret);

    // ���α׷� ����
    return 0;
}

// �־��� �迭���� �� ���� �׷��� �ο� ���� ����Ͽ� ��ȯ�ϴ� �Լ�
int* solution(int people[], int people_len) {
    // ������� ������ �迭 ���� �Ҵ�
    int* answer = (int*)malloc(sizeof(int) * 4);

    // �Ҵ�� �迭�� 0���� �ʱ�ȭ
    memset(answer, 0, sizeof(int) * 4);

    // �� ���� �׷��� �ο� �� ���
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

    // ���� ����� ��ȯ
    return answer;
}
