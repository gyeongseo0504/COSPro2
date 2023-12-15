#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


char* func_a(char* bundle, int start, int n) 
{
    char* answer = (char*)malloc(sizeof(char) * n);
    for (int i = 0; i < n; i++)
        answer[i] = bundle[start + i * 2];
    return answer;
}

int* func_b(int score1, int score2) 
{
    int* answer = (int*)malloc(sizeof(int) * 2);
    // score1과 score2를 받아서, 두 수를 비교하여 결과를 저장
    if (score1 > score2) {
        answer[0] = 1;
        answer[1] = score1;
        // 첫 번째 요소는 비교 결과를 나타내는 코드
    }
    else if (score1 < score2) {
        answer[0] = 2;
        answer[1] = score2;
       // 두 번째 요소는 큰 수를 저장합니다.
    }
    else {
        answer[0] = 0;
        answer[1] = score1;
    }
    return answer;
}

int func_c(char* card, int card_length) {
    int answer = 0;
    for (int i = 0; i < card_length; i++) {
        answer += card[i] - 'a' + 1;
    }
    return answer;
}
// 알파벳 소문자 총합을 계산
int* solution(int n, char* bundle)
{
    char* a_cards = func_a(bundle, 0, n);
    char* b_cards = func_a(bundle, 0, n);
    int a_score = func_c(a_cards, n);
    int b_score = func_c(b_cards, n);
    //func_c에 전달하여 a_score와 b_score를 계산
    int* answer = func_b(a_score, b_score);
    return answer;
}
int main() 
{
    int n = 4;
    char* bundle = "cacdbdedccbb";
    int* ret = solution(n, bundle);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < 2; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");
}