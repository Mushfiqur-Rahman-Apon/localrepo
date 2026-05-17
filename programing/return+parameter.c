#include<stdio.h>
// retun_type fumction_name(parameters)
// {
    
//     return 0;
// }

int sub(int num1, int num2)
{
    int ans = num1 - num2;
    return ans;
}
int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}
int main()

{ 
    int val = sum(10,5);
    int val2 = sub(10,5);
    printf("%d %d",val,val2);
    return 0;
}