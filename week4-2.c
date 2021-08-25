#include <stdio.h>

void factorial (int a){
    int ans = 1;
    while(a >= 1){
        ans*=a;
        a--;
    }
    printf("%d", ans);
    
}
int main(){
    int input;
    scanf("%d",&input);
    factorial(input);
    return 0;
}