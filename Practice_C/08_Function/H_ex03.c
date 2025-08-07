
#include <stdio.h>

int divisorCount(int a){
    int b=0;
    for(int i=1; i<=a;i++){
    if(a%i==0)
        b++;
    }
    return b;
    
}

int main(void)
{
    int num;
    scanf("%d",&num);
    printf("%d",divisorCount(num));
    
    return 0;
}
