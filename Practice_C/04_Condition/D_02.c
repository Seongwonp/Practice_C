#include <stdio.h>

int main(int argc, const char * argv[]) {
    int score;
    scanf("%d",&score);
    if(score>=70)
        printf("합격");
    else
        printf("불합격");
        
    return 0;
}
