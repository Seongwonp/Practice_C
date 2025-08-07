
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b){
        if(a>c)
            printf("%d",a); //a가 b,c보다 큼
        else
            printf("%d",c); // a보다 크기때문에 c
    }
    else if (b>a){
        if(b>c)
            printf("%d",b);
        else
            printf("%d",c);
    }
        
    return 0;
}
