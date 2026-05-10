#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    scanf("%s",s);
    int sz = strlen(s);
    for(int i=0;i<sz;i++)
    {
        if(s[i]==sz-32)
        {
            printf("%c",s[0]);
            
            
    
        }

    }
    return 0;
}