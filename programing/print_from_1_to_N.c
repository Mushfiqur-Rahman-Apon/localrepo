#include<stdio.h>
void hello(int i)
{
    if(i==101)   //end condition
    {
        return;
    }
    if(i%2 ==0)
    {
        printf("%d\n",i);
    }
    hello(i+1);    //increment/decrement
}
int main()
{
    hello(1);   //initialization/starting
    return 0;
}

 //for(starting; end condition ; incre/decre)