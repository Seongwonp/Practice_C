#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(void){
    int i = 0;
    int graph = 0;
    double s = 0;
    double c = 0;
    for (i = 0; i <= 360; i += 30) {
        s = sin((PI * i) / 180.0);
        printf("sin(%3d) %+.4f", i, s);
        for (graph = -10; graph < s * 10; graph++) {
            printf(" ");
        }
        printf("*\n");
    }
    
    printf("\n");

    for (i = 0; i <= 360; i += 30) {
        c = cos((PI * i) / 180.0);
        printf("cos(%3d) %+.4f", i, c);
        for (graph = -10; graph < c * 10; graph++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
