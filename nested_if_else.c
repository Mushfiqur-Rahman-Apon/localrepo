#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox'sbazer jabo\n");
        if (tk >= 10000)
        {
            printf("sant Martin jabo\n");
        }
        else
        {
            printf("jabona\n");
        }
    }
    else
    {
        printf("kotha jabo\n");
    }

    return 0;
}
