#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int calorie[], int calorie_len) 
{
    int min_cal = 0;
    int answer = 0;
    for (int i = 0; i < calorie_len; i++) //calorie�� ���̸� 1�� �߰��ϸ�
    {
        if (calorie[i] > min_cal) //�ּ� Į�θ����
            answer += calorie[i] - min_cal;// Į�θ����� �ּ� Į�θ� ����
        else
            min_cal = calorie[i];
    }
    return answer;
}
int main() 
{
    int calorie[] = { 713, 665, 873, 500, 751 };
    int ret = solution(calorie, 5);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}