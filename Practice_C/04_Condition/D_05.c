#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    char op;
    scanf("%d %c %d",&a, &op ,&b);
    switch(op){
        case '+' :
            printf("%d %c %d = %d",a,op,b,a+b);
            break;
        
        case '-' :
            printf("%d %c %d = %d",a,op,b,a-b);
            break;
        
        case '*' :
            printf("%d %c %d = %d",a,op,b,a*b);
            break;
        
        case '/' :
            if(b==0)
                printf("0으로 나눌 수 없습니다.");
            else
                printf("%d %c %d = %d",a,op,b,a/b);
            break;
        case '%' :
            printf("%d %c %d = %d",a,op,b,a%b);
            break;
        default :
            printf("연산을 수행할 수 없습니다.");
            break;
    }
        
    return 0;
}
