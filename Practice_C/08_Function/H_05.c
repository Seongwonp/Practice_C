#include <stdio.h>

void printArray(int array[], int len) {
    int i;
    for (i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }
}

void sortArray(int array[], int len) {
    
    int tmp;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (array[i] < array[j]) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

int main(void) {
    int score[] = { 99, 84, 91, 78, 89 };
    int array_length = sizeof(score) / sizeof(score[0]);
    sortArray(score, array_length);
    printArray(score, array_length);
    return 0;
}
