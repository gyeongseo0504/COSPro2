#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// 함수 선언: 주어진 비밀번호가 주어진 조건을 만족하는지 확인하는 함수
bool solution(char* password);

// 메인 함수
int main() {
    // 예시 1
    char* password1 = "helloworld";
    bool ret1 = solution(password1);

    // 결과 출력
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1 ? "true" : "false");

    // 예시 2
    char* password2 = "Hello123";
    bool ret2 = solution(password2);

    // 결과 출력
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2 ? "true" : "false");

    // 프로그램 종료
    return 0;
}

// 주어진 비밀번호가 주어진 조건을 만족하는지 확인하는 함수
bool solution(char* password) {
    bool answer;

    // 대문자, 소문자, 숫자의 개수를 카운트하는 변수 초기화
    int capital_count = 0, small_count = 0, digit_count = 0;

    // 비밀번호를 순회하면서 각 문자의 종류에 따라 개수 증가
    for (int i = 0; i < strlen(password); i++) {
        if (password[i] >= 'A' && password[i] <= 'Z')
            capital_count++;
        else if (password[i] >= 'a' && password[i] <= 'z')
            small_count++;
        else if (password[i] >= '0' && password[i] <= '9')
            digit_count++;
    }

    // 대문자가 1개 이상, 소문자가 2개 이상, 숫자가 2개 이상인 경우 조건 만족
    if (capital_count >= 1 && small_count >= 2 && digit_count >= 2)
        answer = true;
    else
        answer = false;

    // 최종 결과값 반환
    return answer;
}
