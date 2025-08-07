#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    int sum=1;
    do{
        scanf("%d",&num);
        if(num>0)
            sum*=num;
        
    }while(num!=0);
    
    printf("%d",sum);

    return 0;
}
