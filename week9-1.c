#include <stdio.h>
int main(){
    int input[10];
    int oodsum,evensum = 0;
    printf("Data in array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&input[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (input[i] % 2 == 1)
        {
            oodsum += i+1;
        }
        else
        {
            evensum += i+1; 
        }
    }
    printf("Result : %d",oodsum-evensum);
    return 0;
}