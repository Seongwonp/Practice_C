#include <stdio.h>
void decimal(int n) {
    int count = 0;
    int i, j;
    for ( i = 2; i <= n; i++) {
        for ( j = 2; j < i; j++) {
            if (i % j == 0)
                break;
        }
        if (i == j)
            printf("%d ", i);
    }
}

int main(void) {
    int num;
    scanf("%d", &num);
    decimal(num);
    return 0;
}
