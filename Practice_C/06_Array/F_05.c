
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int mat2[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    int mat3[3][3]={{1,4,7},{2,5,8},{3,6,9}};
    int mat_sum[3][3];
    for(int i=0; i<3; i++){
        for(int j =0; j<3; j++){
            mat_sum[i][j] = mat1[i][j] + mat2[i][j] + mat3[i][j];
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j =0; j<3; j++){

            printf("%2d",mat_sum[i][j]);
            if(j<2)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
