#include <stdio.h>

int subtract(int a, int b) {
    if (a > b)
        return a - b;
    else
        return b - a;
    }




    int main(void) {
        int n1, n2;
        printf("Enter two integers : ");
        scanf("%d %d", &n1, &n2);
        printf("Subtraction result : %d\n", subtract(n1, n2));
        return 0;
    }
