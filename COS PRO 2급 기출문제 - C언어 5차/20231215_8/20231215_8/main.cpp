#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int usage)
{
    int answer = 0;
    // �� ��뷮�� ���� ������ ����� ����ϴ� �Լ�
    if (usage > 30)
        answer = 20 * 430 + 10 * 570 + (usage - 30) * 840;
    // ��뷮�� 30�� �ʰ��ϸ� �ʰ��� �κп� ���� �� ������ ����� ����Ͽ� �ջ�
    else if (usage > 20)
        answer = 20 * 430 + (usage - 20) * 570;
    // ��뷮�� 20�� �ʰ��ϸ� �ʰ��� �κп� ���� �� ������ ����� ����Ͽ� �ջ�
    else
        answer = usage * 430;
    // ��뷮�� 20 �����̸� 430���� ��뷮�� ���Ͽ� ����� ���
    return answer;
}
int main()
{
    int usage = 35;
    int ret = solution(usage);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}