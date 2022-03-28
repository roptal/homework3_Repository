#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("----- 박현준 2018038063 -----\n");
    int list[5];   // 크기가 5인 정수형 배열 선언
    int *plist[5]; // 정수형 타입 배열을 가리키는 포인터배열 선언
    list[0] = 10;
    list[1] = 11;
    plist[0] = (int *)malloc(sizeof(int));            // plist[0]에 4바이트 만큼의 동적 메모리 할당
    printf("list[0] \t= %d\n", list[0]);              // 10, list[0]의 값
    printf("address of list \t= %p\n", list);         // 0061FF0C, list의 주소 값
    printf("address of list[0] \t= %p\n", &list[0]);  // 0061FF0C, list[0]의 주소 값
    printf("address of list + 0 \t= %p\n", list + 0); // 0061FF10, list + 0의 주소 값
    printf("address of list + 1 \t= %p\n", list + 1); // 0061FF14, list + 1의 주소 값
    printf("address of list + 2 \t= %p\n", list + 2); // 0061FF14, list + 2의 주소 값
    printf("address of list + 3 \t= %p\n", list + 3); // 0061FF18, list + 3의 주소 값
    printf("address of list + 4 \t= %p\n", list + 4); // 0061FF1C, list + 4의 주소 값
    printf("address of list[4] \t= %p\n", &list[4]);  // 0061FF1C, list[4]의 주소 값
    free(plist[0]);                                   // plist[0]에 할당한 메모리를 해제한다
    return 0;
}
