#include <stdio.h>
int main(){
    int input[10];
    int evensum = 0;
    printf("Data in array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&input[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (input[i] % 2 == 0)
        {
            evensum += i+1;
        }
    }
    printf("Result : %d",55-(2*evensum));
    return 0;
}