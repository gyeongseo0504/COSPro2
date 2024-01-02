#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Լ� ����: �־��� �ݾ�, ����, ��ȯ ������ �� ���� ������ ���� �ִ������� ���� ������ ������ ���� ����ϴ� �Լ�
int solution(int money, int price, int n);

// ���� �Լ�
int main() {
    // ���� 1
    int money1 = 8;
    int price1 = 2;
    int n1 = 4;
    int ret1 = solution(money1, price1, n1);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    // ���� 2
    int money2 = 6;
    int price2 = 2;
    int n2 = 2;
    int ret2 = solution(money2, price2, n2);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);

    // ���α׷� ����
    return 0;
}

// �־��� �ݾ�, ����, ��ȯ ������ �� ���� ������ ���� �ִ������� ���� ������ ������ ���� ����ϴ� �Լ�
int solution(int money, int price, int n) {
    int answer = 0;
    int empty_bottle = answer = money / price;

    // �� ������ ��ȯ ������ Ƚ���� ��ȯ ������ �� ���� �������� ���� ������ �ݺ�
    while (n <= empty_bottle) {
        // ��ȯ ������ �� ������ ���� ���� ��, ���� �� �� ���
        empty_bottle = empty_bottle - n;
        answer++;
        empty_bottle++;
    }

    // ���� ����� ��ȯ
    return answer;
}
