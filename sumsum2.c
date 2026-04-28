#include<stdio.h>
int main()
{
    int n;
    int x;
    int pos =0,neg =0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);  
        if(x>0)
        {
            pos += x;
        }
        else
        {
            neg += x;
        }
    }
    printf("%d %d",pos,neg);

    return 0;
}
// think you