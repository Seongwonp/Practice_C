

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double kg,m,BMI;
    scanf("%lf %lf",&kg,&m);
    BMI=kg/(m*m);
    if(BMI>=30)
        printf("중등도비만");
    else if(BMI>=25)
        printf("경도비만");
    else if(BMI>=23)
        printf("과체중");
    else if(BMI>=18.5)
        printf("정상");
    else
        printf("저체중");
        
    return 0;
    
}
