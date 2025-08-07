
#include <stdio.h>

int main(int argc, const char * argv[]) {
    char schoolYear;
    char semester;
    int credit;
    double score;
    char grade;
    schoolYear =1;
    semester =2;
    credit =15;
    score =4.1;
    grade='A';
    printf("## %s 학생의 %d학년 %d학기 성적표 ##\n", "김코딩", schoolYear, semester);
    printf("소속 : %s\n", "소프트웨어학과");
    printf("이수학점 : %d\n", credit);
    printf("평점 : %.1f\n", score);
    printf("학점 : %d\n", grade);
    return 0;

    }
