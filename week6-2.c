#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int m1[m][n],m2[m][n];

    int (*p1)[n];
    int (*p2)[n];
    p1 = m1;
    p2 = m2;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",& *( *(p1 + i) + j));
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",& *( *(p2 + i) + j));
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",(*( *(p1 + i) + j)) + (*( *(p2 + i) + j)));
        }
        printf("\n");
    }
    return 0;
}