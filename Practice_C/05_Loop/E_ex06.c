
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int count, line;
    scanf("%d %d",&count,&line);
    for(int i =1; i<=line;i++){
        int star=1; // 홀수행이면 * 부터 시작
        if(i%2==0)
            star=!star; //짝수행이면 / 부터 시작
        
        for(int a=1;a<=count;a++){
            if(star)
                printf("*");
            else
                printf("/");
            star=!star; //번갈아가면서 출력
        }
        
        printf("\n");
        
    }
    return 0;
}
