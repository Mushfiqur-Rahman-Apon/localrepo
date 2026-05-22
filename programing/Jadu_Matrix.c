#include<stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int z[r][c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &z[i][j]);
        }
    }
    int total_val = r*c;
    int diagonal = 1;
    
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(z[i][j] == 1)
            {
                diagonal++;
            }
        }
    }
    
    
    if(diagonal == total_val)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}