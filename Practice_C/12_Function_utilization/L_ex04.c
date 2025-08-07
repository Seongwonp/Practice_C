#include <stdio.h>
#include <math.h>
#define PI 3.141592
double area(double r, double h){
    return 2 * PI * r * h + 2 * PI * pow(r, 2);
}
int main(void){
    double r, h;
    scanf("%lf %lf", &r, &h);
    printf("%.2lf",area(r, h));
    return 0;
}
