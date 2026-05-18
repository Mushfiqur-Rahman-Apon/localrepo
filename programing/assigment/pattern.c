#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star = 1;
    int space = n-1;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=space;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)
        {
            if(i%2==0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("   \n");
        star+=2;
        space--;

    }
    // star = n*2-3;
    star = n * 2-3;
    space = 1;
    for(int i=n-1;i>=1;i--)
    {
        for(int k=1;k<=space ;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)
        {
            if(i%2==0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
            if(i==n && j==star)
            {
                break;
            }

        }
        printf(" \n");
        star-= 2;
        space ++;
    }
    return 0;
}
//thank you