#include<stdio.h>
int oneDig(int);
int main()
{
    int a;
    printf("Enter a 2-digit number: ");
    scanf("%d",&a);
    printf("Result= %d",oneDig(a));
    return 0;
}
int oneDig(int a)
{
    return (a%10);
}