#include<stdio.h>
int add2(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Result= %d",add2(a));
    return 0;
}
int add2(int a)
{
    return (a+2);
}

