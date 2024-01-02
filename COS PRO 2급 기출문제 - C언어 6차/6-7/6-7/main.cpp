#include <stdio.h>
#include <stdlib.h>

// �Լ� ����: �־��� �ݾ����� �� �� �ִ� ���� ��� ���ڿ� å���� ���� ������ ����ϴ� �Լ�
int solution(int money, int chairs[], int chairs_len, int desks[], int desks_len);

// ���� �Լ�
int main() {
    // ���� 1
    int money1 = 7;
    int chairs1[] = { 2, 5 };
    int chairs_len1 = 2;
    int desks1[] = { 4, 3, 5 };
    int desks_len1 = 3;
    int ret1 = solution(money1, chairs1, chairs_len1, desks1, desks_len1);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    // ���� 2
    int money2 = 7;
    int chairs2[] = { 3 };
    int chairs_len2 = 1;
    int desks2[] = { 5 };
    int desks_len2 = 1;
    int ret2 = solution(money2, chairs2, chairs_len2, desks2, desks_len2);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);

    // ���α׷� ����
    return 0;
}

// �־��� �ݾ����� �� �� �ִ� ���� ��� ���ڿ� å���� ���� ������ ����ϴ� �Լ�
int solution(int money, int chairs[], int chairs_len, int desks[], int desks_len) {
    int answer = 0;

    // ��� ���ڿ� å���� ���տ� ���� ���� ��� ������ ã��
    for (int i = 0; i < chairs_len; i++) {
        for (int j = 0; j < desks_len; j++) {
            int price = chairs[i] + desks[j];
            if (answer < price && money >= price)
                answer = price;
        }
    }

    // ���� ����� ��ȯ
    return answer;
}
