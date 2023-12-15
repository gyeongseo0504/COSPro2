#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int point) 
{
    if (point < 1000)//만약 1000미만이면
        return 0;
    return point / 100 * 100;
    //point에 100으로 나누고 100 을 곱해준다
}
int main() 
{
    int point = 2323;
    int ret = solution(point); 

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}