
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int  histo[10]={0};
        int n=0;
        int a,b,i;
        while(1){
            scanf("%d",&n);
            if(n==-1) break;
            
            if(n<=9)
                histo[n]++;
            else if(n>=10 && n<=99){
                    a=n/10;
                    b=n%10;
                    histo[a]++;
                      histo[b]++;
            }
            
            
        }
        for(i=0 ; i<10;i++){
            printf("%d : %d\n",i, histo[i]);
        }
        return 0;
}
