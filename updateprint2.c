#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&n[i]);  
    }
     for(int i=n-1;i>=0;i--)
     
    {
        printf("%d ",n[i]);
    }

    return 0;
};