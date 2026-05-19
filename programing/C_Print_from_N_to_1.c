#include<stdio.h>
void print_name(int n)
{
    printf("%d ", n);
        if(n==1)
        {
            return;
        }
        print_name(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_name(n);
    return 0;
}