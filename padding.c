#include <stdio.h>
struct student
{
    char lastName[13]; /* 13 bytes */
    int studentId;     /* 4 bytes */
    short grade;       /* 2 bytes */
};
int main()
{
    printf("----- ������ 2018038063 -----\n");
    struct student pst;                                        //����ü ���� ����
    printf("size of student = %ld\n", sizeof(struct student)); // 24
    /*�ܼ��� ���ϸ� ����ü�� ũ��� 19����Ʈ�� �Ǿ�� ������ padding ����� ���Ǿ��� ������
      ����ü�� ũ��� 24����Ʈ�� ��� �ȴ� */
    printf("size of int = %ld\n", sizeof(int));     // 4, int�� ũ��
    printf("size of short = %ld\n", sizeof(short)); // 2, short�� ũ��
    return 0;
}