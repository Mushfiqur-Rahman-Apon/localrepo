#include<stdio.h>
void print_name(int n)
{
    
        if(n==1)
        {
            printf("%d\n", n);
            return;
        }
        printf("%d ", n);
        print_name(n-1);
        // printf("%d\n", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_name(n);
    return 0;
}