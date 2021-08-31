#include <stdio.h>
#include <math.h>
int main(){
    int input ;
    scanf("%d",&input);
    input -= 1;
    for (int i = -input; i <= input; i++)
    {
        for (int j = -input; j <= input; j++)
        {
            if(abs(i) == input || abs(i)==abs(j))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    

    return 0;
}