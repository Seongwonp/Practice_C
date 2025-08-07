#include <stdio.h>
int min(int a, int b, int c) {
    int mini = a;
    if (mini > b) mini = b;
    if (mini > c) mini = c;
    
    return mini;
}
int main() {
    int n1, n2, n3;
    printf("Enter three integers : ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("Smallest value : %d\n", min(n1, n2, n3));
    return 0;
}
