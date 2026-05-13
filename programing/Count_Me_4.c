#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    scanf("%s",s);
    int sz = strlen(s);

    int fre[10000] = {0};
    for(int i=0;i<sz;i++)
    {   
        int val = s[i] - 'a';
        fre[val]++;
    }
    for(int i=0;i<26;i++)
    {   
        if(fre[i]>0)
        {
            printf("%c - %d\n",i+'a',fre[i]);
        }
    }
    return 0;
}
// int val = s[i] - 'a';
//         printf("%c - %d\n",s[i],val);
// thank YOU