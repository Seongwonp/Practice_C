
#include <stdio.h>

int main(int argc, const char * argv[]) {
    for(int num = 2; num<=100;num++){
        int prime =1; //참 거짓 판별 우선 참으로 선언
        for(int i=2; i*i<=num;i++){
            if(num%i==0){ //약수가 있는지 확인
                prime = 0; //약수가 있으므로 거짓
                break;
            }
        }
        
        if(prime) // 참(1)이면 출력
            printf("%d ",num);
    }

    return 0;
}
