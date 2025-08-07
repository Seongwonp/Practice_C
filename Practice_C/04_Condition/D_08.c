

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int month;
    scanf("%d",&month);
    if(month%2==0 && month != 2){
        if(month<7)
            printf("30");
        else
            printf("31");
    }
    else if (month == 2)
        printf("28");
    else{
        if(month<=7)
            printf("31");
        else
            printf("30");
    }
    return 0;
}
