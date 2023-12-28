#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int stuffs[], int stuffs_len) 
{
    int answer = 0;

    int small_counter = 0;
    int general_counter = 0;
    // 작은 크기와 일반 크기를 저장할 변수

    for (int i = 0; i < stuffs_len; i++) // 물건의 크기 배열을 순회하면서 작은 크기와 일반 크기를 구분하여 합산
    {
        if (stuffs[i] > 3)
            general_counter += stuffs[i];
        else
            small_counter += stuffs[i];
    }
    // 작은 크기와 일반 크기 중 합이 더 큰 값을 결과값으로 설정
    if (small_counter > general_counter)
        answer = small_counter;
    else
        answer = general_counter;

    return answer;
}
int main() 
{
    int stuffs[6] = { 5, 3, 4, 2, 3, 2 };
    int stuffs_len = 6;
    int ret = solution(stuffs, stuffs_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}