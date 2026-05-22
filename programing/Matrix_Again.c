#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d", &r, &c);
    int last[r][c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &last[i][j]);
        }
    }
    int last_row ;
    int last_colum ;
    for(int j = 0; j < c; j++)
    {
        printf("%d ", last[r-1][j]);
    }
    printf("\n");
    for(int i = 0; i < r; i++)
    {
        
        printf("%d ", last[i][c-1]);
    }
    printf("\n");
    
    return 0;
}
//thank you