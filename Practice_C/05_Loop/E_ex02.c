
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int height;
       scanf("%d",&height);
       //왼쪽 아레가 직각인 삼각형
       printf("\n");
       for(int i=1;i<=height;i++){
           
           for(int a=1; a<=i;a++)
               printf("*");
           
           printf("\n");
       }
       //왼쪽 위가 직각인 삼각형
       printf("\n");
       for(int i=height;i>0;i--){
           
           for(int a=i;a>0;a--)
               printf("*");
           
           printf("\n");
       }
       //오른쪽 아래가 직각인 삼각형
       printf("\n");
       for(int i=1; i<=height;i++){
           
           for(int b=1; b<=height-i;b++)
               printf(" ");
           for(int a=1; a<=i;a++)
               printf("*");
           printf("\n");
       }
       //오른쪽 위가 직각인 삼각형
       printf("\n");
       for(int i=height;i>0;i--){
           
           for(int b=1;b<=height-i;b++)
               printf(" ");
           for(int a=i;a>0;a--)
               printf("*");
           
           printf("\n");
       }
       //표준입력으로 입력한 정수가 높이인 피라미드 모양의 삼각형
       printf("\n");
        for(int i =1;i<=height;i++){
           
           for(int a=height-i;a>0;a--)
               printf(" ");
           
           for(int b=1;b<=2*i-1;b++)
               printf("*");
               
           printf("\n");
       }
       return 0;
}
