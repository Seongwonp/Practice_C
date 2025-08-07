
#include <stdio.h>
#define PI 3.14
int main(int argc, const char * argv[]) {
    double radius= 3.58;
    double circumference= 2 * radius * PI;
    double area=radius * radius * PI;
    printf("원의 면적 : %lf\n",area);
    printf("원의 둘레 : %lf",circumference);
    return 0;
    }
