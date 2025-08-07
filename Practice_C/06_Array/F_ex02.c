
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num[10];
    int max,min,tmp;
    int i,j;
    char a;
    for(int i=0; i<10; i++){
        scanf("%d",&num[i]);
    }
    scanf(" %c",&a);
    
    if(a=='A'){
        for(i=0; i<9; i++){
            min=i;
            for(j = i+1 ; j<10; j++){
                if(num[j]<num[min])
                    min=j;
            }
            tmp=num[i];
            num[i]=num[min];
            num[min]=tmp;
        }
        for(i=0;i<10;i++){
            printf("%d ",num[i]);
        }
    }
    else if(a=='D'){
        for(i=0; i<9; i++){
            max=i;
            for(j = i+1 ; j<10; j++){
                if(num[j]>num[max])
                    max=j;
            }
            tmp=num[i];
            num[i]=num[max];
            num[max]=tmp;
        }
        for(i=0;i<10;i++){
            printf("%d ",num[i]);
        }
    }
    
    return 0;
}
