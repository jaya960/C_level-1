#include<stdio.h>
int sub5(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Result= %d",sub5(a));
    return 0;
}
int sub5(int a)
{
    return (a-5);
}