

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double c , f;
    scanf("%lf",&f);
      c=(f-32)*5/9;
    printf("화씨 %.1f도는 섭씨 %.1f도 입니다.\n",f,c);
    return 0;
}
