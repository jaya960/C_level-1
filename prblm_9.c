#include<stdio.h>
int hundDig(int);
int main()
{
    int a;
    printf("Enter a 3-digit number: ");
    scanf("%d",&a);
    printf("Result= %d",hundDig(a));
    return 0;
}
int hundDig(int a)
{
    return (a/100);
}