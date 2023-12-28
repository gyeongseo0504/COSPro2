#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int time_table[], int time_table_len) // 배열에서 가장 마지막으로 등장하는 1의 인덱스를 반환하는 함수
{
    int answer = 0;
    for (int i = time_table_len - 1; i >= 0; i--)
    {
        if (time_table[i] == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}

int func_b(int time_table[], int class1, int class2) // 주어진 범위 내에서 0의 개수를 세는 함수
{
    int answer = 0;
    for (int i = class1; i < class2; i++)
        if (time_table[i] == 0)
            answer++;
    return answer;
}

int func_c(int time_table[], int time_table_len)// 배열에서 가장 처음으로 등장하는 1의 인덱스를 반환하는 함수
{
    int answer = 0;
    for (int i = 0; i < time_table_len; i++) {
        if (time_table[i] == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}
int solution(int time_table[], int time_table_len) {
    int answer = 0;
    int first_class = func_c(time_table, time_table_len);// 가장 처음으로 등장하는 1과 가장 마지막으로 등장하는 1의 인덱스를 얻어옴
    int last_class = func_a(time_table, time_table_len);
    answer = func_b(time_table, first_class, last_class);
    return answer;
}
int main() {
    int time_table[] = { 1, 1, 0, 0, 1, 0, 1, 0, 0, 0 };// 주어진 수업 시간표 배열
    int time_table_len = 10;// 배열의 길이
    int ret = solution(time_table, time_table_len);// solution 함수 호출하여 결과를 ret에 저장

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}