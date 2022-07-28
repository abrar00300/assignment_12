#include<stdio.h>
void evenr(int);
int main()
{
    int n;
    printf("enter value for N =");
    scanf("%d",&n);
    evenr(n);
    return 0;
}
void evenr (int n)
{
    if(n>0)
    {
        printf("%d ",n*2);
        evenr(n-1);
    }
}

