#include<stdio.h>
void print(int);
int main()
{
    int n;
    printf("enter value of N=");
    scanf("%d",&n);
    print(n);
    return 0;
}
void print(int n)
{
    if(n>0)
    {
        print(n-1);
        printf("%d ",n);
    }
}
