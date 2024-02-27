#include<stdio.h>
int divr8(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Result= %d",divr8(a));
    return 0;
}
int divr8(int a)
{
    return (a%8);
}