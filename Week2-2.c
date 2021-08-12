#include <stdio.h>
int main(){
    int a,b,c,max;
    scanf("%d %d %d",&a, &b ,&c);
    if(a>=c && b>=c){
        max = a+b;
    }else if (a>=b && c>=b)
    {
        max = a+c;
    }else 
    {
        max = b+c;
    }
    printf("%d",max);
    return 0;
}