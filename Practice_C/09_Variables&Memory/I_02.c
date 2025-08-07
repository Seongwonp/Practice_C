#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int* arr = NULL;
    arr = malloc(sizeof(int)*3);
    
    if (arr == NULL) {
        printf("Memory allocation problem!\n");
        return -1;
    }
    *arr = 100;
    for (int i = 0; i < 3; i++) {
        
        *arr = 100 + i;
        printf("Value : %d\n", *arr);
        arr++; //주소
    }

    arr -= 3;

    free(arr);
    arr = NULL;
    return 0;
}
