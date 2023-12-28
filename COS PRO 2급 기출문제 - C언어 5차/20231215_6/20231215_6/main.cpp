#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int korean, int english)
{
    int answer = 0;

    int math = 210 - (korean + english);// 수학 점수 계산: 210에서 국어와 영어 점수의 합을 뺀다.

    if (math > 100)
        answer = -1;
    else
        answer = math;
    // 만약 수학 점수가 100을 초과하면 -1로 설정, 그렇지 않으면 계산된 수학 점수를 결과값으로 설정
    return answer;
}
int main() 
{
    int korean = 70;
    int english = 60;
    int ret = solution(korean, english);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}