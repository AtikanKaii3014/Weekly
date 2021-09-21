#include <stdio.h>
int main(){
    char input[100];
    scanf("%s",input);
    for (int i = 0; i < 100; i++)
    {
        if (input[i+1] == '\0')
        {
            printf("%c",input[i]);
            break;
        }
    }
    return 0;
}