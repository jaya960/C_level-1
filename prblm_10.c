#include<stdio.h>
int tenDig(int);
int main()
{
    int a;
    printf("Enter a 3-digit number: ");
    scanf("%d",&a);
    printf("Result= %d",tenDig(a));
    return 0;
}
int tenDig(int a)
{
    int i;
    i= ((a/10)%10);
    return (i);
}