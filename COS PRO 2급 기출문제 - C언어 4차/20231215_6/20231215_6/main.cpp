#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int point) 
{
    if (point < 1000)//���� 1000�̸��̸�
        return 0;
    return point / 100 * 100;
    //point�� 100���� ������ 100 �� �����ش�
}
int main() 
{
    int point = 2323;
    int ret = solution(point); 

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}