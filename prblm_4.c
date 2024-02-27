#include<stdio.h>
int divq6(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Result= %d",divq6(a));
    return 0;
}
int divq6(int a)
{
    return (a/6);
}