#include <stdio.h>

void print1(int *ptr, int rows);

int main()
{
    printf("----- 박현준 2018038063 -----\n");
    int one[] = {0, 1, 2, 3, 4};

    printf("one     = %p\n", one);     // 0061FF0C, one의 주소
    printf("&one    = %p\n", &one);    // 0061FF0C, one의 주소
    printf("&one[0] = %p\n", &one[0]); // 0061FF0C, one[0]의 주소
    printf("\n");
    print1(&one[0], 5); // one[0]의 주소를 *ptr에 전달, 5를 rows에 복사
    return 0;
}
void print1(int *ptr, int rows) //*ptr은 참조에 의한 호출, rows는 값에 의한 호출
{
    int i;
    printf("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t  %5d\n", ptr + i, *(ptr + i));
    printf("\n");
}