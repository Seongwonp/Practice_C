
#include <stdio.h>

int main(int argc, const char * argv[]) {
    for(int i=1; i<=100;i++){
        if( i%2==0 || i%7==0 || i%9==0 )
            continue;
    for(int a=1; a<=5;a++){
            printf("%d ",i);
    }
        printf("\n");
    }

    return 0;
}
