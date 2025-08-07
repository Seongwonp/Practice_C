
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    for(int i=1;i<10;i++){
        for(int x=2; x<10; x++){
            printf("%d x %d = %d",x,i,x*i);
            if(x==9)
                continue;
            printf("\t");
        }
        printf("\n");
    }
return 0;
}
