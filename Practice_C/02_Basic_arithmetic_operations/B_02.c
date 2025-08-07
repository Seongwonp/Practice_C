#include <stdio.h>

int main(int argc, const char * argv[]) {
    double rank, noOfStudents;
    rank=5;
    noOfStudents =75;
    printf("당신은 상위 %.2lf%%입니다.\n", rank / noOfStudents *100);
    return 0;
    }
