
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[5] = { 0 };
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }
    int* ptr = arr;
    for (int j = 0; j < 5; j++) {
        sum += ptr[j];
    }
    printf("%d", sum);
    return 0;
}
