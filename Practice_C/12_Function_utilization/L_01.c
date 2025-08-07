
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int strike_1, strike_2, strike_3, answer_1, answer_2, answer_3;

     printf("숫자야구의 정답을 입력하세요 : ");
     scanf("%d %d %d", &strike_1, &strike_2, &strike_3);
     printf("\n");

     for (int i = 1; i < 8; i++) {
         int strike = 0, ball = 0;
         printf("[%d회차]\n", i);
         printf("0부터 9까지 숫자를 3개 입력 : ");
         scanf("%d %d %d", &answer_1, &answer_2, &answer_3);

        
         if (answer_1 == strike_1) {
             ++strike;
         } else {
            
             if (answer_1 == strike_2 || answer_1 == strike_3) {
                 ++ball;
             }
         }

        
         if (answer_2 == strike_2) {
             ++strike;
         } else {
             
             if (answer_2 == strike_1 || answer_2 == strike_3) {
                 ++ball;
             }
         }

         
         if (answer_3 == strike_3) {
             ++strike;
         } else {
             
             if (answer_3 == strike_1 || answer_3 == strike_2) {
                 ++ball;
             }
         }

        
         printf("[결과]스트라이크 : %d, 볼 : %d\n", strike, ball);
         printf("\n");
         if(strike == 3){
             printf("사용자가 승리하였습니다.");
             return 0;
         }
     }
     printf("컴퓨터가 승리하였습니다.");
     return 0;
}
