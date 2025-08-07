#include <stdio.h>
#include <stdlib.h>
int main(void){

    int major_count;
    scanf("%d", &major_count);

    double *score = NULL;
    score = malloc(sizeof(double)*major_count);
    if (score == NULL)
        return -1;

    double sum = 0.0;
    for (int i = 0; i < major_count; i++) {
        scanf("%lf", &score[i]);
        sum += score[i];
    }
    
    double avg = sum / major_count;
    printf("%.2lf", avg);
    
    return 0;
}
