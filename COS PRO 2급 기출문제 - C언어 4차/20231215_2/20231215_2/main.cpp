#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int passed, int non_passed) 
{
    return (passed > 1 && non_passed == 0);//시험 통과한 1명 학생과 불합격자는 없는
}

int func_b(int scores[3]) 
{
    int answer = 0;
    if (scores[0] < 40) 
    {
        answer++;
    }
    if (scores[1] < 44) //점수들이 40,44,34미만 이라면
    {
        answer++; // 함수 +
    }
    if (scores[2] < 35) 
    {
        answer++;
    }
    return answer;
}

int func_c(int scores[3]) 
{
    int answer = 0;
    if (scores[0] >= 80) 
    {
        answer++;
    }
    if (scores[1] >= 88) // 점수들이 80,88,70 이상이라면 
    {
        answer++;//함수 증가
    }
    if (scores[2] >= 70) 
    {
        answer++;
    }
    return answer;
}
int solution(int scores[][3], int scores_len) {
    int answer = 0;
    for (int i = 0; i < scores_len; i++) //각 학생 점수를 반복
    {
        int passed = func_c(scores[i]);//체력시험 통과하는 사람을 func_c
        int non_passed = func_b(scores[i]);//미달인 사람은 func_b
        answer += func_a(passed, non_passed);//계산된 결과에 총합을 구함
    }
    return answer;
}
int main() {
    int scores1[2][3] = {
        {30, 40, 100},
        {97, 88, 95}
    };
    int ret1 = solution(scores1, 2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int scores2[6][3] = {
        {90, 88, 70},
        {85, 90, 90},
        {100, 100, 70},
        {30, 90, 80},
        {40, 10, 20},
        {83, 88, 80}
    };
    int ret2 = solution(scores2, 6);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}