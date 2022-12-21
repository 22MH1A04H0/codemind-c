#include<stdio.h>
int main()
{
    int x,i,n,s=0;
    scanf("%d",&x);
    n=x;
    for(i=1;i<=n;i++)
    {
        if(x%i==0&&x!=i)
        {
            s=s+i;
        }
    }
    printf("%d",s);
    return 0;
}