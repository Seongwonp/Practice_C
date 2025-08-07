#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    while(i<=100){
        if(i%5==0){
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}
