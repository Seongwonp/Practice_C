
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int topay; //내야할돈
     int have; //가진돈
     int change; //거스름돈
     int fiftyT; //5만원 갯수
     int tenT; // 만원 갯수
     int t; //천원 갯수
     int h; //백원 갯수
     int ten; // 10원 갯수
     scanf("%d %d",&have,&topay);
     change=have-topay;
     if(change<0)
         printf("돈이 부족합니다.");
     else{
             
                 fiftyT=change/50000;
                 tenT=(change % 50000) / 10000;
                 t=((change % 50000) % 10000) / 1000;
                 h=(((change % 50000) % 10000) % 1000) / 100;
                 ten=((((change % 50000) % 10000) % 1000) % 100) / 10;
                 
                 
         printf("50000원 : %d개\n",fiftyT);
         printf("10000원 : %d개\n",tenT);
         printf("1000원 : %d개\n",t);
         printf("100원 : %d개\n",h);
         printf("10원 : %d개\n",ten);
         
     }
     
     
     
     
     
     return 0;
}
