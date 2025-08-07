#include <stdio.h>
int add(int a, int b){ //덧셈
    return a + b;
}
int minus(int a, int b) { //뺄셈
    if (b > a)
        return b - a;
    else
        return a - b;
}
int mult(int a, int b) { //곱셈
    return a * b;
}
int main(void) {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d ",add(num1,num2));
    printf("%d ",minus(num1, num2));
    printf("%d", mult(num1, num2));
    return 0;
}
