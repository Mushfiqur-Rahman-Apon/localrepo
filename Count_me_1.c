#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            even++;
            // if (a[i] % 2 == 0)
            // {
            //     odd++;
            // }
        }
        else if (a[i] % 3 == 0)
        {
            odd++;
            if(a[i] % 2 == 0 && a[i] % 3 == 0)
             {
                odd++;
             }
        }
    }
    printf("%d ", even);
    printf("%d ", odd);
    return 0;
}
// thank You