#include <stdio.h>
int sum(int a) {
    if (a == 1)
        return 1;
    else
        return(a + sum(a - 1));
}

int main(void) {
    int num;
    scanf("%d", &num);
    printf("%d", sum(num));
    return 0;
}
