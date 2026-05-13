#include<stdio.h>
int main()
{
    // char n;
    // scanf("%c", &n);
    char a[100];
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%c", &a[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%c\n", a[i]);
    
    }
    // int fre [6] = {0};
    // for(int i=0; i<n; i++)
    // {
        
    //     int val = a[i];
    //     fre[a[val]]++;
        
    // }
    // for(int i=1; i<=5; i++)
    // {
    //     printf("%c - %c\n", i, fre[i]);
    // }
    return 0;
}