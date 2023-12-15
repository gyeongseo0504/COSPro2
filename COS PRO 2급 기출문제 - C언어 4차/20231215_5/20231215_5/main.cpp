#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int calorie[], int calorie_len) 
{
    int min_cal = 0;
    int answer = 0;
    for (int i = 0; i < calorie_len; i++) //calorie의 길이를 1씩 추가하며
    {
        if (calorie[i] > min_cal) //최소 칼로리라면
            answer += calorie[i] - min_cal;// 칼로리에서 최소 칼로리 빼기
        else
            min_cal = calorie[i];
    }
    return answer;
}
int main() 
{
    int calorie[] = { 713, 665, 873, 500, 751 };
    int ret = solution(calorie, 5);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}