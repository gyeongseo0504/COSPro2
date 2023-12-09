#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int number1, int number2)
{
    int ret = 0;

    if (number1 > number2)
        ret = number1 - number2;
    else
        ret = number2 - number1;
    return ret;
}
int func_b(int number)
{
    int ret = 0;

    while (number != 0)
    {
        number = number / 10;
        ret++;
    }
    return ret;
}

int func_c(int number, int digit)
{
    int ret = 0;

    for (int i = 0; i < digit; i++)
    {
        int temp = number % 10;
        number = number / 10;
        ret = ret * 10 + temp;
    }
    return ret;
}
int solution(int number)
{
    int answer = 0;

    int digit = func_b(number); //number의 자릿수 구함
    int convert_number = func_c(number, digit); //구한 자릿수를 이용해 수를 뒤집는다
    answer = func_a(number, convert_number); //number 자릿수와 뒤집은수의 차이를 구함

    return answer;
}

int main()
{
    int number1 = 120;
    int ret1 = solution(number1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int number2 = 23;
    int ret2 = solution(number2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    return 0;
}