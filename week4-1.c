#include <stdio.h>

void factorial (int a){
    int ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans*=i;
    }
    printf("%d", ans);
    
}
int main(){
    int input;
    scanf("%d",&input);
    factorial(input);
    return 0;
}