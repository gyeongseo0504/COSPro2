#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(char* schedule[], int schedule_len) 
{
    int x_count = 0; //x개수를 세는 함수
    for (int i = 0; i < 10; i++) // 스케쥴 반복
        if (schedule[i][0] == 'X')//x가 배열에 잇으면
            x_count++;//함수 증가

    int* answer = (int*)malloc(sizeof(int) * x_count);
    for (int i = 0, j = 0; i < 10; i++)  
    {
        if (schedule[i][0] == 'X') //배열에 x가 있다면
        {
            answer[j++] = i + 1; //답 함수에 1씩 증가
              
        }
    }
    return answer;
}

int main() {
    char* schedule[] = { "O", "X", "X", "O", "O", "O", "X", "O", "X", "X" };
    int* ret = solution(schedule, 10);

    printf("solution 함수의 반환 값은 ");
    for (int i = 0; i < 5; i++)
        printf("%d, ", ret[i]);
    printf("입니다.");

}