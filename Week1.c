#include <stdio.h>
int main(){

    //week1
    // int a,b,c,num1,num2,num3,max;
    // scanf("%d %d %d",&a, &b ,&c);
    // num1 = a+b;
    // num2 = a+c;
    // num3 = b+c;
    // if(num1>=num2 && num1>=num3){
    //     max = num1;
    // }else if (num2>=num1 && num2>=num3)
    // {
    //     max = num2;
    // }else 
    // {
    //     max = num3;
    // }
    // printf("%d",max);

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