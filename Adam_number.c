#include<stdio.h>
int main()
{
    int n,a=0,r=0,s=0,b=0,c,q,teno=0,temp=0;
    scanf("%d",&n);
    q=n;
    a=n*n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s*10+r;
    }
    b=s*s;
    c=b;
    while(c!=0)
    {
        teno=c%10;
        c=c/10;
        temp=temp*10+teno;
    }
    if (a==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}