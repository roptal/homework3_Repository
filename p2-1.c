#include <stdio.h>

#define MAX_SIZE 100

float sum(float[], int);
float input[MAX_SIZE], answer;
int i;
int main(void)
{
    printf("----- 박현준 2018038063 -----\n");
    for (i = 0; i < MAX_SIZE; i++)
        input[i] = i;

    printf("address of input = %p\n", input); // 00407020, input의 주소
    answer = sum(input, MAX_SIZE);            // input은 배열의 주소를 list로 넘기고 MAX_SIZE의 값이 n으로 복사 된다.
    printf("The sum is: %f\n", answer);       // 4950, 합계 출력
    return 0;
}
float sum(float list[], int n) // list는 참조에 의한 호출, n은 값에 의한 호출
{
    printf("value of list = %p\n", list);      // 00407020, list의 값
    printf("address of list = %p\n\n", &list); // 0061FF00, list의 주소

    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)
        tempsum += list[i]; // 1부터 99까지의 합
    return tempsum;
}