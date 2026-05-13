#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int capi = 0, small = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 5 == 0)
        {
            capi++;
        }
         
        {
            small++;
        }
        if (a[i] % 5 == 0)
        {
            capi++;
        }
         else
        {
            small++;
        }
    }
    printf("Capi: %d\n", capi);
    printf("Small %d\n", small);

    return 0;
}