#include <stdio.h>

int main(int argc, const char * argv[]) {
    double dollarWonExchangeRate, dollar, won;
      scanf("%lf %lf",&dollarWonExchangeRate, &dollar);
      won=dollar * dollarWonExchangeRate;
      printf("%.2f달러는 %.0f원 입니다.",dollar, won);
    return 0;
}
