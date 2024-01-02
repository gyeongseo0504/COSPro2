#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 함수 선언: 두 숫자의 차이를 계산하는 함수
int func_a(int number1, int number2);

// 함수 선언: 숫자의 자릿수를 계산하는 함수
int func_b(int number);

// 함수 선언: 숫자의 자릿수를 거꾸로 뒤집는 함수
int func_c(int number, int digit);

// 함수 선언: 문제에서 주어진 조건에 따라 결과를 계산하는 함수
int solution(int number);

// 메인 함수
int main() {
    // 예시 1
    int number1 = 120;
    int ret1 = solution(number1);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    // 예시 2
    int number2 = 23;
    int ret2 = solution(number2);

    // 결과 출력
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    // 프로그램 종료
    return 0;
}

// 두 숫자의 차이를 계산하는 함수
int func_a(int number1, int number2) {
    int ret = 0;

    if (number1 > number2)
        ret = number1 - number2;
    else
        ret = number2 - number1;

    return ret;
}

// 숫자의 자릿수를 계산하는 함수
int func_b(int number) {
    int ret = 0;

    while (number != 0) {
        number = number / 10;
        ret++;
    }

    return ret;
}

// 숫자의 자릿수를 거꾸로 뒤집는 함수
int func_c(int number, int digit) {
    int ret = 0;

    for (int i = 0; i < digit; i++) {
        int temp = number % 10;
        number = number / 10;
        ret = ret * 10 + temp;
    }

    return ret;
}

// 문제에서 주어진 조건에 따라 결과를 계산하는 함수
int solution(int number) {
    int answer = 0;
    int digit = func_b(number);
    int convert_number = func_c(number, digit);
    answer = func_a(number, convert_number);
    return answer;
}
