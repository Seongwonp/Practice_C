
#include <stdio.h>
#define PI 3.141592
int main(int argc, const char * argv[]) {
    double radius = 15;
    double area;
    area = radius * radius * PI;
    printf("반지름 %.1lf인 피자의 넓이는 %.1f입니다.\n",radius,area);
    printf("1인당 %.1lf 크기의 피자를 먹을 수 있습니다.\n",area/5);
    
    return 0;
    }
