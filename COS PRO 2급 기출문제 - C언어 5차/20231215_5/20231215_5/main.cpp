#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) 
{
    int answer = 0;

    // 1부터 b까지의 정수 중에서 a의 배수인 수를 찾아서 최종 결과값으로 설정
    for (int i = 1; i <= b; i++) 
    {
        if ((a * i) % b == 0) 
        {
            answer = a * i;
            // 조건을 만족하는 최소의 수를 찾으면 반복문 종료
            break;
        }
    }

    return answer;
}
int main() 
{

    int a = 4;
    int b = 6;

    // solution 함수 호출하여 결과를 ret에 저장
    int ret = solution(a, b);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

}
