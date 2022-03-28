#include <stdio.h>

#define MAX_SIZE 100

float sum(float[], int);
float input[MAX_SIZE], answer;
int i;
int main(void)
{
    printf("----- ������ 2018038063 -----\n");
    for (i = 0; i < MAX_SIZE; i++)
        input[i] = i;

    printf("address of input = %p\n", input); // 00407020, input�� �ּ�
    answer = sum(input, MAX_SIZE);            // input�� �迭�� �ּҸ� list�� �ѱ�� MAX_SIZE�� ���� n���� ���� �ȴ�.
    printf("The sum is: %f\n", answer);       // 4950, �հ� ���
    return 0;
}
float sum(float list[], int n) // list�� ������ ���� ȣ��, n�� ���� ���� ȣ��
{
    printf("value of list = %p\n", list);      // 00407020, list�� ��
    printf("address of list = %p\n\n", &list); // 0061FF00, list�� �ּ�

    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)
        tempsum += list[i]; // 1���� 99������ ��
    return tempsum;
}