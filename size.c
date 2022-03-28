#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("----- 박현준 2018038063 -----\n");
    int **x;                                    //정수형 타입의 이중 포인터 배열 선언
    printf("sizeof(x) = %lu\n", sizeof(x));     // x의 크기 4바이트
    printf("sizeof(*x) = %lu\n", sizeof(*x));   //*x의 크기 4바이트
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x의 크기 4바이트
    return 0;
}