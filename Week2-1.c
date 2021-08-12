#include <stdio.h>
int main(){
    int a,b,c,num1,num2,num3;
    scanf("%d %d %d",&a, &b ,&c);
    num1 = a+b;
    num2 = a+c;
    num3 = b+c;
    if(num1>=num2 && num1>=num3){
        printf("%d %d",a,b);
    }else if (num2>=num1 && num2>=num3)
    {
        printf("%d %d" ,a,c);
    }else 
    {
        printf("%d %d",b,c);
    }
    
    return 0;
    
}