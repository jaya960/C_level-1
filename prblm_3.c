#include<stdio.h>
int mul3(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Result= %d",mul3(a));
    return 0;
}
int mul3(int a)
{
    return (a*3);
}