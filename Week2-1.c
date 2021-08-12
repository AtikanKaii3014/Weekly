#include <stdio.h>
int main(){
    int a,b,c,num1,num2,num3,max;
    scanf("%d %d %d",&a, &b ,&c);
    num1 = a+b;
    num2 = a+c;
    num3 = b+c;
    if(num1>=num2 && num1>=num3){
        max = num1;
    }else if (num2>=num1 && num2>=num3)
    {
        max = num2;
    }else 
    {
        max = num3;
    }
    printf("%d",max);
    return 0;
    
}