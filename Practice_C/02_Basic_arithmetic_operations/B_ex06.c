
#include <stdio.h>
#define KM 0.621371
int main(int argc, const char * argv[]) {
    double speed = 3;
    double distance= (10/KM) - 0.15;
    printf("%lf",distance/speed);
    return 0;
}
