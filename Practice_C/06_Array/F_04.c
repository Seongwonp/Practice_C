
#include <stdio.h>

int main(int argc, const char * argv[]) {
    double score[3][4];
       int i,j;
       double avg[3];
       for(i=0;i<3;i++){
           for(j=0;j<3;j++){
               scanf("%lf", &score[i][j]);
               score[i][3]+=score[i][j];
           }
           avg[i] = score[i][3]/j;
       }
       for(i=0; i<3;i++){
           printf("Student %d : total %.0lf, avg %.1lf, ",i+1,score[i][3],avg[i]);
           if(score[i][3]>=240)
               printf("Pass\n");
           else
               printf("Fail\n");
       }

       return 0;
}
