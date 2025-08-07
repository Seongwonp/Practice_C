#include <stdio.h>

int main(int argc, const char * argv[]) {
    int line;
    scanf("%d",&line);
    for(int a=1;a<=line; a++){ //line만큼 반복
        for(int blank=1; blank<=line-a; blank++) // 빈칸을 line-a만큼 츨력
            printf(" ");
        
        for(int star=1; star<=2*a-1; star++)// 별을 2a-1만큼 출력
          
            printf("*");
        
        printf("\n"); //줄 바꿈
    }
    
  return 0;
}
