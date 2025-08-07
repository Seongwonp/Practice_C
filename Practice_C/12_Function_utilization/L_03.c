#include <stdio.h>
 #include <math.h>

 #define pi 3.1415926535897

 double getRadian(int num)
 {
 return num * (pi / 180);
 }

 int main(void)
 {
 int x = 210, y = 120, z = 25;
 double radian_x = getRadian(x);
 double radian_y = getRadian(y);
 double radian_z = getRadian(z);

 double result1 = sin(radian_x);
 double result2 = cos(radian_y);
 double result3 = tan(radian_z);

 printf("%.1lf %.1lf %.4lf\n", result1, result2, result3);

 return 0;
 }
