 #include<stdio.h>
 #include<limits.h>
 int main()
 {
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        int n;
        scanf("%d",&n);
        int a[n+1];
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);

        int min = INT_MAX;    
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;i<=n;j++)
            {
                if(a[i]+a[j]+j-i < min)
                    min = a[i]+a[j]+j-1;
            }
        }
        printf("%d\n",min);
    } 
     return 0;
}