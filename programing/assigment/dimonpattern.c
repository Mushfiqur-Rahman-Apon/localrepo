#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // int star = 1;
    
    
    // int space = 0;
    // space = n-1;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=space;j++)
    //     {
    //         printf(" ");
    //     }
    //     for(int k=1;k<=star;k++)
    //     {
    //         if( i%2==0)
    //         {
    //             printf("-");
    //         }
    //         else 
    //         {
    //             printf("#");
    //         }
    //     }
    //     printf("\n");
    //     star+= 2;
        
    //     space--;
        

    int star = n*2-3;
    
    
    int space = 0;
    // space = n*2-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=star;k++)
        {
            if( i%2==0)
            {
                printf("-");
            }
            else 
            {
                printf("#");
            }
        }
        printf("\n");
        star-= 2;
        
        space++;
        

    }
    return 0;
}