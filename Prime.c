#include<stdio.h>
int main()
{
    int n,i,m=0,f=0;
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            printf("Not Prime");
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("Prime");
    }
    return 0;
}