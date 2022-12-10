#include<stdio.h>
int main()
{
    int l,b,h;
    scanf("%d%d%d",&l,&b,&h);
    float area;
    area=0.5*(l+b)*h;
    printf("%0.4f",area);
}