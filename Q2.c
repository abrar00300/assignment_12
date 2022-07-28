#include<stdio.h>
void print(int);
int main()
{
    int n;
    printf("enter value for N=");
    scanf("%d",&n);
    print(n);
  //  printf("%d ",n);
    return 0;
}
void print(int n)
{
    if(n>0)
    {
          printf("%d ",n);
        print(n-1);
    }
}
