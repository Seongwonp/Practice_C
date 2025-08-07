#include <stdio.h>
void printArray(int* ptr, int len) {
    for(int i=len; i>0; i--){
        printf("%d ", ptr[i - 1]);
    }
}
int main(void) {
    int score[] = { 99, 84, 91, 78, 89 };
    int array_length = sizeof(score) / sizeof(score[0]);
    printArray(score, array_length);
    return 0;
}
