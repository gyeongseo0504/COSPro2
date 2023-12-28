#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �־��� ��ٸ� ������ �̿��Ͽ� ������ �����ϰ� ���� ���� ������ �÷��̾ ��ȯ�ϴ� �Լ�
int solution(int ladders[][2], int ladders_len, int win)
{
    int answer = 0;

    // 1���� 6������ �÷��̾� �迭 �ʱ�ȭ
    int player[6] = { 1, 2, 3, 4, 5, 6 };

    // �־��� ��ٸ� ������ �̿��Ͽ� �÷��̾� �̵�
    for (int i = 0; i < ladders_len; i++)
    {
        // ���� ��ٸ��� ���ʰ� ������ ��ġ�� ��ȯ�Ͽ� �÷��̾� �̵� �ùķ��̼�
        int temp = player[ladders[i][0] - 1];
        player[ladders[i][0] - 1] = player[ladders[i][0]];
        player[ladders[i][0]] = temp;
    }

    // ���� ���� ������ �÷��̾ ��������� ����
    answer = player[win - 1];

    return answer;
}

int main()
{
    // ��ٸ� ������ ���� 2���� �迭
    int ladders[5][2] = { {1, 2}, {3, 4}, {2, 3}, {4, 5}, {5, 6} };
    int ladders_len = 5;// ��ٸ��� ����
    int win = 3;// ���� ���� ����

    int ret = solution(ladders, ladders_len, win);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

    return 0;
}