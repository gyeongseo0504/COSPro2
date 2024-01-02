#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// �Լ� ����: �־��� ��й�ȣ�� �־��� ������ �����ϴ��� Ȯ���ϴ� �Լ�
bool solution(char* password);

// ���� �Լ�
int main() {
    // ���� 1
    char* password1 = "helloworld";
    bool ret1 = solution(password1);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret1 ? "true" : "false");

    // ���� 2
    char* password2 = "Hello123";
    bool ret2 = solution(password2);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret2 ? "true" : "false");

    // ���α׷� ����
    return 0;
}

// �־��� ��й�ȣ�� �־��� ������ �����ϴ��� Ȯ���ϴ� �Լ�
bool solution(char* password) {
    bool answer;

    // �빮��, �ҹ���, ������ ������ ī��Ʈ�ϴ� ���� �ʱ�ȭ
    int capital_count = 0, small_count = 0, digit_count = 0;

    // ��й�ȣ�� ��ȸ�ϸ鼭 �� ������ ������ ���� ���� ����
    for (int i = 0; i < strlen(password); i++) {
        if (password[i] >= 'A' && password[i] <= 'Z')
            capital_count++;
        else if (password[i] >= 'a' && password[i] <= 'z')
            small_count++;
        else if (password[i] >= '0' && password[i] <= '9')
            digit_count++;
    }

    // �빮�ڰ� 1�� �̻�, �ҹ��ڰ� 2�� �̻�, ���ڰ� 2�� �̻��� ��� ���� ����
    if (capital_count >= 1 && small_count >= 2 && digit_count >= 2)
        answer = true;
    else
        answer = false;

    // ���� ����� ��ȯ
    return answer;
}
