#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    int count=0;
    scanf("%d",&num);
    printf("Divisors of %d : ",num);
    for(int i=1; i<=num; i++){
        if(num%i==0){
            printf("%d ",i);
            count++;
        }
    }
    printf("\nNumber of Divisors of %d : %d",num,count);
    
    return 0;
}
