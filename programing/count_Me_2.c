#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    scanf("%s",s);
    int sz = strlen(s);
    for(int i=0;i<sz;i++)
    {
        // if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u') 
        {
            
            sz--;
            for(int j=i; j<sz; j++)
            {
                s[j] = s[j+1];
            }
                i--;
            

    
        }
        
    }
    printf("%d",sz);

    
    
    
    return 0;
}
// thanks