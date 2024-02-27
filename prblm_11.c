#include<stdio.h>
int sumdig(int);
int main()
{
    int a;
    printf("Enter a 2-digit number: ");
    scanf("%d",&a);
    printf("Result= %d",sumdig(a));
    return 0;
}
int sumdig(int a)
{
    int dig1, dig2,result;
    dig1= (a/10);
    dig2= (a%10);
    result= dig1+dig2;
    return (result);
}