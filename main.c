#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 9, 4, 5}; 
    int flag_same = 1;

    for (i = 0; i < SIZE; i++)
    {
        if (a[i] != b[i])
        {
            printf("인덱스 %d의 값이 다릅니다: a[%d]=%d, b[%d]=%d\n", i, i, a[i], i, b[i]);
            flag_same = 0;
        }
    }

    if (flag_same == 1)
    {
        printf("두 배열은 완전히 동일합니다.\n");
    }

    return 0;
}
