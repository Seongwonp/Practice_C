#include <stdio.h>
#include <stdlib.h>
 
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
 
void bubbleSort(int arr[], int n, int ascending) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (ascending) {
                if (arr[j] > arr[j + 1]) {
                    swap(&arr[j], &arr[j + 1]);
                }
            } else {
                if (arr[j] < arr[j + 1]) {
                    swap(&arr[j], &arr[j + 1]);
                }
            }
        }
    }
} //오름차순 내림차순
 
int main(void) {
    int *arr = NULL;
    int n = 0;
    
    scanf("%d", &n);
 
    if ((arr = (int *)malloc(sizeof(int) * n)) == NULL) {
        return -1;
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 
    int a;
    scanf("%d", &a);
 
    if (a == 1) {
        bubbleSort(arr, n, 1);
    } else if (a == 2) {
        bubbleSort(arr, n, 0);
    } else {
        return -1;
    }
 
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
 
    free(arr);
    return 0;
}
