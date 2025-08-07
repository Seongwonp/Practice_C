
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int tmp = 0;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;

    printf("%d %d", num1, num2);

    return 0;
}
