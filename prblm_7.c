#include<stdio.h>
int tenDig(int);
int main()
{
    int a;
    printf("Enter a 2-digit number: ");
    scanf("%d",&a);
    printf("Result= %d",tenDig(a));
    return 0;
}
int tenDig(int a)
{
    return (a/10);
}