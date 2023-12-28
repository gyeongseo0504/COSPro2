#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int time_table[], int time_table_len, int n)
// 시간표와 시간표 길이, 그리고 n을 받아 최대 시간을 계산하는 함수
{
    int answer = 0;
    int* arr = (int*)malloc(sizeof(int) * n);
    // 각 강의실의 현재 시간을 저장할 배열 동적 할당

    for (int i = 0; i < time_table_len; i++)
    // 시간표를 순회하면서 강의실에 시간을 할당하고 최대 시간을 갱신
    {
        arr[i % n] += time_table[i];
        if (arr[i % n] > answer) answer = arr[i % n];
    }

    return answer;
}
int main() 
{
    int time_table1[] = { 1, 5, 1, 9 };
    int time_table_len1 = 4;
    int n1 = 3;
    int ret1 = solution(time_table1, time_table_len1, n1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int time_table2[] = { 4, 8, 2, 5, 4, 6, 7 };
    int time_table_len2 = 7;
    int n2 = 4;
    int ret2 = solution(time_table2, time_table_len2, n2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}