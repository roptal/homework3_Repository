#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("----- ������ 2018038063 -----\n");
    int **x;                                    //������ Ÿ���� ���� ������ �迭 ����
    printf("sizeof(x) = %lu\n", sizeof(x));     // x�� ũ�� 4����Ʈ
    printf("sizeof(*x) = %lu\n", sizeof(*x));   //*x�� ũ�� 4����Ʈ
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x�� ũ�� 4����Ʈ
    return 0;
}