#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    scanf("%s",s);
    int sz = strlen(s);
    int n;
    scanf("%d", &n);
    int fr[n] = {0};

    for(int i=0;i<sz;i++)
    {
        int val = s[i] - 'a';
        fr[val]++;
    }

    for(int i=0;i<n;i++)
    {   
        
        {
            printf("%c - %d\n",i+'a',fre[i]);
        }
    }
    return 0;
}