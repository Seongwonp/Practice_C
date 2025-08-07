#include <stdio.h>
char grade(int a){
    if(a>=90)
        return 'A';
    else if (a>=80)
        return 'B';
    else if (a>=70)
        return 'C';
    else if (a>=60)
        return 'D';
    else
        return 'F';
}

int main(void)
{
    int num;
    scanf("%d",&num);
    printf("%c",grade(num));

    return 0;
}
