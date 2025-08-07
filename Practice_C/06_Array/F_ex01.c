
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num[5];
        double sum=0;
        int i=0;
        double a,mean;
        while(1){
            scanf("%lf",&a);
            if(a<0){
                printf("잘못된 입력입니다.\n");
            }
            else{
                num[i]=a;
                i++;
                if(i==5)
                    break;
            }
        }
        int max=num[0];
        int min=num[0];
        for(i=0; i<5;i++){
            sum+=num[i];
            if(num[i]>max){
                max=num[i];
            }
            if(num[i]<min){
                min=num[i];
            }
        }
        
        printf("total = %.0lf\n",sum);
        printf("mean = %.2lf\n",sum/5);
        printf("max = %d\n",max);
        printf("min = %d\n",min);
        if(sum<350)
            printf("불합격입니다.");
        else
            printf("합격입니다.");
        
        return 0;
}
