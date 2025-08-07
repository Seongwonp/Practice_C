
#include <stdio.h>
#include<math.h>
#define USA 1120
#define JP 11.21
int main(int argc, const char * argv[]) {
    int won = 10000000;
    printf("%d 달러\n",won/USA);
    printf("%.f 엔",floor(won/JP));
    return 0;
}
