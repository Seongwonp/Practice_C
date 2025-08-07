#include <stdio.h>

void fibo(int n) {
    int a = 1, b = 1, next;
    if (n >= 1)
        printf("1 ");
    if (n >= 2)
        printf("1 ");
    
    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
}

int main(void) {
    int num;
    scanf("%d", &num);
    fibo(num);
    
    return 0;
}
