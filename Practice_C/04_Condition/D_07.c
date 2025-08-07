

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double x,y;
    scanf("%lf %lf",&x,&y);
    if(x>0){
        if(y>0)
            printf("%lf",x+y);
        else
            printf("%lf",x-y);
    }
    else{
        if(y>0)
            printf("%lf",-x+y);
        else
            printf("%lf",-x-y);
    }

    return 0;
}
