#include <stdio.h>
int main(){
    int input[10];
    for (int i = 0; i < 10 ; i++)
    {
        scanf("%d",&input[i]);
    }
    for (int i = 1; i < 10; i++)
    {
        if (input[i-1] % 2 == 1 && input[i+1] % 2 == 1)
        {
            printf("%d ",input[i]);
        }
        
    }
    return 0;
}