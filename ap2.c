#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("----- ������ 2018038063 -----\n");
    int list[5];   // ũ�Ⱑ 5�� ������ �迭 ����
    int *plist[5]; // ������ Ÿ�� �迭�� ����Ű�� �����͹迭 ����
    list[0] = 10;
    list[1] = 11;
    plist[0] = (int *)malloc(sizeof(int));            // plist[0]�� 4����Ʈ ��ŭ�� ���� �޸� �Ҵ�
    printf("list[0] \t= %d\n", list[0]);              // 10, list[0]�� ��
    printf("address of list \t= %p\n", list);         // 0061FF0C, list�� �ּ� ��
    printf("address of list[0] \t= %p\n", &list[0]);  // 0061FF0C, list[0]�� �ּ� ��
    printf("address of list + 0 \t= %p\n", list + 0); // 0061FF10, list + 0�� �ּ� ��
    printf("address of list + 1 \t= %p\n", list + 1); // 0061FF14, list + 1�� �ּ� ��
    printf("address of list + 2 \t= %p\n", list + 2); // 0061FF14, list + 2�� �ּ� ��
    printf("address of list + 3 \t= %p\n", list + 3); // 0061FF18, list + 3�� �ּ� ��
    printf("address of list + 4 \t= %p\n", list + 4); // 0061FF1C, list + 4�� �ּ� ��
    printf("address of list[4] \t= %p\n", &list[4]);  // 0061FF1C, list[4]�� �ּ� ��
    free(plist[0]);                                   // plist[0]�� �Ҵ��� �޸𸮸� �����Ѵ�
    return 0;
}
