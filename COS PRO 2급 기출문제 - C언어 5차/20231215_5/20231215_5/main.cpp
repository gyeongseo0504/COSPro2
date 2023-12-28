#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) 
{
    int answer = 0;

    // 1���� b������ ���� �߿��� a�� ����� ���� ã�Ƽ� ���� ��������� ����
    for (int i = 1; i <= b; i++) 
    {
        if ((a * i) % b == 0) 
        {
            answer = a * i;
            // ������ �����ϴ� �ּ��� ���� ã���� �ݺ��� ����
            break;
        }
    }

    return answer;
}
int main() 
{

    int a = 4;
    int b = 6;

    // solution �Լ� ȣ���Ͽ� ����� ret�� ����
    int ret = solution(a, b);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

}
