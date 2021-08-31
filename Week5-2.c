#include <stdio.h>
#include <math.h>
int main(){
    int input ;
    scanf("%d",&input);
    for (int i = 1; i <= (2*input) - 1; i++)
    {
        for (int j = 1; j <= (2*input) - 1; j++)
        {
            if( i == 1 || i == (2*input) - 1 || i == j || i + j == 2*(input))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    

    return 0;
}