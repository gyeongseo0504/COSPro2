#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int classes[], int classes_len, int m) 
{
    int answer = 0;
    for (int i = 0; i < classes_len; i++) 
    {
        answer += classes[i] / m;
        //각 반의 학생들 수 만큼 나누기
        if (classes[i] - m != 0)
        //나머지 가 남는다면
            answer++;
        //1을 추가
    }
    return answer;
}
int main() {
    int classes[] = { 80, 45, 33, 20 };
    int m = 30;
    int ret = solution(classes, 4, m);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}