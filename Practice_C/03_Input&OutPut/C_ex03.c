

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1,num2,bit;
    scanf("%d %d",&num1,&num2);
    bit= num2>0 ? num1<<num2 : num1>>(-num2);
    printf("%d",bit);

    return 0;
}
