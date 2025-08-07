#include <stdio.h>
#include <stdlib.h>

int main(void){
    char arr[11];
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%s", arr);

        int value = atoi(arr);
        if (value != 0) {
            sum += value;
        }
    }
    
    printf("모든 문자열의 정수 합 : %d", sum);

    return 0;
}
