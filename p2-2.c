#include <stdio.h>

void print1(int *ptr, int rows);

int main()
{
    printf("----- ������ 2018038063 -----\n");
    int one[] = {0, 1, 2, 3, 4};

    printf("one     = %p\n", one);     // 0061FF0C, one�� �ּ�
    printf("&one    = %p\n", &one);    // 0061FF0C, one�� �ּ�
    printf("&one[0] = %p\n", &one[0]); // 0061FF0C, one[0]�� �ּ�
    printf("\n");
    print1(&one[0], 5); // one[0]�� �ּҸ� *ptr�� ����, 5�� rows�� ����
    return 0;
}
void print1(int *ptr, int rows) //*ptr�� ������ ���� ȣ��, rows�� ���� ���� ȣ��
{
    int i;
    printf("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t  %5d\n", ptr + i, *(ptr + i));
    printf("\n");
}