// #include<stdio.h>

// void fun(char s[], int n)
// {
    
//     {
//         printf("%s ",s);
//     }
// }
// int main()
// {

//     char s[10];
//     scanf("%s",&s);
//     fun(s, 10);
    
//     return 0;
// };

#include<stdio.h>
int main()
{
    int ary[4] = {1,2,3,4};
    int *p;
    p = ary + 3;
    *p = 5;
    printf("%d \n",ary[3]);
    
    return 0;
}