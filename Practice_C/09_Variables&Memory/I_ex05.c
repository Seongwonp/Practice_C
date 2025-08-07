#include <stdio.h>
#include <stdlib.h>
//입력
void matrix_Input(int** matrix, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
         }
    }
}
//두 행렬의 곱
void matrix_Multiplication(int** matrix1, int** matrix2, int** value, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            value[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                value[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
//출력
void matrix_Print(int** value, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", value[i][j]);
        }
        printf("\n");
    }
}




int main(void){
    int num;
    scanf("%d", &num);
    
    int** matrix1, ** matrix2, ** value;
    matrix1 = (int**)malloc(num * sizeof(int*));
    matrix2 = (int**)malloc(num  * sizeof(int*));
    value = (int**)malloc(num * sizeof(int*));

    if (matrix1 == NULL || matrix2 == NULL || value == NULL) {
        return -1;
    }

    for (int i = 0; i < num; ++i) {
        matrix1[i] = (int*)malloc(num * sizeof(int));
        matrix2[i] = (int*)malloc(num * sizeof(int));
        value[i] = (int*)malloc(num * sizeof(int));

        if (matrix1[i] == NULL || matrix2[i] == NULL || value[i] == NULL)
            return -1;
    }
    matrix_Input(matrix1, num);
    matrix_Input(matrix2, num);

    matrix_Multiplication(matrix1, matrix2, value, num);

    matrix_Print(value, num);

    for (int i = 0; i < num; ++i) {
        free(matrix1[i]);
        free(matrix2[i]);
        free(value[i]);
    }
    free(matrix1);
    free(matrix2);
    free(value);

    return 0;
}
