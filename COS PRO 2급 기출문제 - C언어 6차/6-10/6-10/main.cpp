#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Լ� ����: �־��� ���� ������ ������ �ʴ� ���� ������ ����ϴ� �Լ�
int solution(int weight, int boxes[], int boxes_len);

// ���� �Լ�
int main() {
    // ����
    int weight = 600;
    int boxes[] = { 653, 670, 533, 540, 660 };
    int boxes_len = 5;
    int ret = solution(weight, boxes, boxes_len);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

    // ���α׷� ����
    return 0;
}

// �־��� ���� ������ ������ �ʴ� ���� ������ ����ϴ� �Լ�
int solution(int weight, int boxes[], int boxes_len) {
    int answer = 0;

    // �� ���ڿ� ���� �־��� ���� ������ ���ϴ��� Ȯ���ϰ�, ������ ������ answer�� ������Ŵ
    for (int i = 0; i < boxes_len; i++)
        if (boxes[i] < weight * 0.9 || boxes[i] > weight * 1.1)
            answer++;

    // ���� ����� ��ȯ
    return answer;
}
