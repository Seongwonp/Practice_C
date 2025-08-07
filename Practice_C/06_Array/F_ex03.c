
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int mat1[2][3] = { {9,2,7},{4,5,6} };
    int mat2[][2] = { {2,13},{5,10},{2,11} };
    int resultMat[2][2] = { 0 };
    int i, j, k;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                resultMat[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d", resultMat[i][j]);
            if(j==1)
                continue;
            printf(" ");
        }
        if(i==1)
                continue;
        printf("\n");
    }
    return 0;
}
