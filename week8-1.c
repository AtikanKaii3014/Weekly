#include <stdio.h>
int main(){
    char input[100];
    scanf("%s",input);
    for (int i = 0; i < 100; i++)
    {
        if (input[i] == '\0')
        {
            printf("%c",input[i-1]);
            break;
        }
    }
    return 0;
}