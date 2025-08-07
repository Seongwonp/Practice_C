
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int c;
    double f;
    for(c=-10;c<=100;c+=10){
        f=(9.0/5.0)*c+32;
        printf("%.0lf\n",f);
    }
    return 0;
}
