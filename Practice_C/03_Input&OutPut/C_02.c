#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    scanf("%d",&num);
    printf("%s",num%2==0?"짝수":"홀수");
    return 0;
}
