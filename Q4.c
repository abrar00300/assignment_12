#include<stdio.h>
void odd(int);
int main()
{
    int n;
    printf("enter value for N=");
    scanf("%d",&n);
    odd(n);
    return 0;
}
void odd(int n)
{
    if(n>0)
    {
         printf("%d ",(n*2-1));
        odd(n-1);
    }
}
