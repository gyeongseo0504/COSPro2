#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Լ� ����: �־��� �� �迭���� ������ �����ϴ� �ּ� ���̸� ����Ͽ� ��ȯ�ϴ� �Լ�
int solution(int papers[], int papers_len, int K);

// ���� �Լ�
int main() {
    // ���� 1
    int papers1[] = { 2, 4, 3, 2, 1 };
    int papers_len1 = 5;
    int K1 = 10;
    int ret1 = solution(papers1, papers_len1, K1);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    // ���� 2
    int papers2[] = { 2, 4, 3, 2, 1 };
    int papers_len2 = 5;
    int K2 = 14;
    int ret2 = solution(papers2, papers_len2, K2);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);

    // ���α׷� ����
    return 0;
}

// �־��� �� �迭���� ������ �����ϴ� �ּ� ���̸� ����Ͽ� ��ȯ�ϴ� �Լ�
int solution(int papers[], int papers_len, int K) {
    // �ʱ� ���̸� ��ü ���� ���̷� ����
    int length = papers_len;

    // �� �迭�� ��ȸ�ϸ鼭 ���̸� ����
    for (int i = 0; i < papers_len; i++) {
        // ���� ���� ���̸� K���� ����
        K -= papers[i];

