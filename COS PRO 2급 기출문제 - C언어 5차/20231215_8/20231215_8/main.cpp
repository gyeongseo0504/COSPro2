#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int usage)
{
    int answer = 0;
    // 물 사용량에 따라 수도세 요금을 계산하는 함수
    if (usage > 30)
        answer = 20 * 430 + 10 * 570 + (usage - 30) * 840;
    // 사용량이 30을 초과하면 초과된 부분에 대해 각 구간별 요금을 계산하여 합산
    else if (usage > 20)
        answer = 20 * 430 + (usage - 20) * 570;
    // 사용량이 20을 초과하면 초과된 부분에 대해 각 구간별 요금을 계산하여 합산
    else
        answer = usage * 430;
    // 사용량이 20 이하이면 430원을 사용량에 곱하여 요금을 계산
    return answer;
}
int main()
{
    int usage = 35;
    int ret = solution(usage);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}