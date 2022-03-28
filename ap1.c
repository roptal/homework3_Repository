#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("----- ������ 2018038063 -----\n");
    int list[5]; // 5���� ������ ���� �� �ִ� �迭
    int *plist[5] = {
        NULL,
    }; // ������ ���� 5�� �����͹迭 ����

    plist[0] = (int *)malloc(sizeof(int)); // plist[0]�� int�� ũ�⸸ŭ ���� �޸𸮸� �Ҵ�

    list[0] = 1;
    list[1] = 100;

    printf("value of list[0] = %d\n", list[0]);      // 1
    printf("address of list[0] = %p\n", &list[0]);   // 0061FF0C, list[0]�� �ּ�
    printf("value of list = %p\n", list);            // 0061FF0C, list�� �ּ� �� ���
    printf("address of list (&list) = %p\n", &list); // 0061FF0C, list�� �ּ� �� &list ���

    printf("---------------------------------------------\n\n");

    printf("value of list[1] = %d\n", list[1]);        // 100
    printf("address of list[1] = %p\n", &list[1]);     // 0061FF10, list[1]�� �ּ� ��� list[0]�� �ּ� + 4����Ʈ
    printf("value of *(list+1) = %d\n", *(list + 1));  // 100, list+1�� ����Ű�� ���� �� == list[1]
    printf("address of list list+1 = %p\n", list + 1); // 0061FF10, list + 1�� �ּ� ��� list�� �ּ� + 4����Ʈ

    printf("---------------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]); // 13313200, plist[0]�� ����Ű�� ���� �� ���
    printf("&plist[0] = %p\n", &plist[0]);          // 0061FEF8, plist[0]�� �ּ� �� ���
    printf("&plist = %p\n", &plist);                // 0061FEF8, plist�� �ּ� �� ���
    printf("plist = %p\n", plist);                  // 0061FEF8, plist�� �ּ� �� ���
    printf("plist[0] = %p\n", plist[0]);            // 00CB1700, plist[0]�� ����Ű�� ���� �ּ� �� ���
    printf("plist[1] = %p\n", plist[1]);            // 00000000
    printf("plist[2] = %p\n", plist[2]);            // 00000000
    printf("plist[3] = %p\n", plist[3]);            // 00000000
    printf("plist[4] = %p\n", plist[4]);            // 00000000
    return 0;
}