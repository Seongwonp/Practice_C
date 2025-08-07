#include <stdio.h>

int main(int argc, const char * argv[]) {
    int kor, eng, math;
    int sum, avg;
    kor=90;
    eng=90;
    math=90;
    sum= kor+eng+math;
    avg= sum/3;
    printf("세 과목의 합계는 %d이다.\n", sum);
    printf("세 과목의 평균은 %d이다.\n",avg);
    return 0;


}
