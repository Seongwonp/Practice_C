
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1,num2;
    char op;
    scanf("%d %c %d",&num1,&op,&num2);
    op=='+' ? printf("%d %c %d = %d",num1,op,num2,num1+num2):0;
    op=='-' ? printf("%d %c %d = %d",num1,op,num2,num1-num2):0;
    op=='*' ? printf("%d %c %d = %d",num1,op,num2,num1*num2):0;
    op=='/' ? (num2==0 ? printf("can not divide by 0\n") : printf("%d %c %d =%lf\n",num1,op,num2,num1/num2)):0;
    return 0;
}
