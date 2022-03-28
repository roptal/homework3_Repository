#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("----- 박현준 2018038063 -----\n");
    int list[5]; // 5개의 정수를 담을 수 있는 배열
    int *plist[5] = {
        NULL,
    }; // 정수에 대한 5개 포인터배열 선언

    plist[0] = (int *)malloc(sizeof(int)); // plist[0]에 int의 크기만큼 동적 메모리를 할당

    list[0] = 1;
    list[1] = 100;

    printf("value of list[0] = %d\n", list[0]);      // 1
    printf("address of list[0] = %p\n", &list[0]);   // 0061FF0C, list[0]의 주소
    printf("value of list = %p\n", list);            // 0061FF0C, list의 주소 값 출력
    printf("address of list (&list) = %p\n", &list); // 0061FF0C, list의 주소 값 &list 출력

    printf("---------------------------------------------\n\n");

    printf("value of list[1] = %d\n", list[1]);        // 100
    printf("address of list[1] = %p\n", &list[1]);     // 0061FF10, list[1]의 주소 출력 list[0]의 주소 + 4바이트
    printf("value of *(list+1) = %d\n", *(list + 1));  // 100, list+1이 가리키는 곳의 값 == list[1]
    printf("address of list list+1 = %p\n", list + 1); // 0061FF10, list + 1의 주소 출력 list의 주소 + 4바이트

    printf("---------------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]); // 13313200, plist[0]이 가리키는 곳의 값 출력
    printf("&plist[0] = %p\n", &plist[0]);          // 0061FEF8, plist[0]의 주소 값 출력
    printf("&plist = %p\n", &plist);                // 0061FEF8, plist의 주소 값 출력
    printf("plist = %p\n", plist);                  // 0061FEF8, plist의 주소 값 출력
    printf("plist[0] = %p\n", plist[0]);            // 00CB1700, plist[0]이 가리키는 곳의 주소 값 출력
    printf("plist[1] = %p\n", plist[1]);            // 00000000
    printf("plist[2] = %p\n", plist[2]);            // 00000000
    printf("plist[3] = %p\n", plist[3]);            // 00000000
    printf("plist[4] = %p\n", plist[4]);            // 00000000
    return 0;
}