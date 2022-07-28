#include<stdio.h>
void even(int);
int main()
{
    int n;
    printf("enter value for N =");
    scanf("%d",&n);
    even(n);
    return 0;
}
void even (int n)
{
    if(n>0)
    {
        even(n-1);
        printf("%d ",n*2);
    }
}
