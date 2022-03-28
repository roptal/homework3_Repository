#include <stdio.h>
struct student
{
    char lastName[13]; /* 13 bytes */
    int studentId;     /* 4 bytes */
    short grade;       /* 2 bytes */
};
int main()
{
    printf("----- 박현준 2018038063 -----\n");
    struct student pst;                                        //구조체 변수 선언
    printf("size of student = %ld\n", sizeof(struct student)); // 24
    /*단순히 더하면 구조체의 크기는 19바이트가 되어야 하지만 padding 방식이 사용되었기 때문에
      구조체의 크기는 24바이트로 출력 된다 */
    printf("size of int = %ld\n", sizeof(int));     // 4, int의 크기
    printf("size of short = %ld\n", sizeof(short)); // 2, short의 크기
    return 0;
}