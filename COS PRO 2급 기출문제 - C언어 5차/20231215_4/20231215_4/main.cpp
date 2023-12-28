#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Լ� ����: �±ǵ�, ����, ��� ������ �޾� ���� ������ ����ϴ� �Լ�
int solution(int taekwondo, int running, int shooting[], int shooting_len);

// ���� �Լ�
int main() {
    // �±ǵ� ����
    int taekwondo = 27;
    // ���� �ð�
    int running = 63;
    // ��� ���� �迭
    int shooting[] = { 9, 10, 8, 10, 10, 10, 7, 10, 10, 10 };
    // ��� ���� �迭�� ����
    int shooting_len = 10;

    int ret = solution(taekwondo, running, shooting, shooting_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

    return 0;
}

// �±ǵ�, ����, ��� ������ �޾� ���� ������ ����ϴ� �Լ�
int solution(int taekwondo, int running, int shooting[], int shooting_len) {
    // ���� ������ ������ ����
    int answer = 0;

    // �±ǵ� ������ 25 �̻��̸� 250���� ���ϰ�, �׷��� ������ �±ǵ� ������ 8�踦 ����
    if (taekwondo >= 25)
        answer += 250;
    else
        answer += taekwondo * 8;

    // ���� �ð��� ���� ������ ����
    answer += 250 + (60 - running) * 5;

    // ��� ������ ��ȸ�ϸ鼭 ������ ���ϰ�, ���� 10���� ���� Ƚ���� 7ȸ �̻��̸� 100���� �߰��� ����
    int count = 0;
    for (int i = 0; i < shooting_len; i++) {
        answer += shooting[i];
        if (shooting[i] == 10)
            count++;
    }
    if (count >= 7)
        answer += 100;

    return answer;
}
