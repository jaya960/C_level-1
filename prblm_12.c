#include<stdio.h>
int sumdig(int);
int main()
{
    int a;
    printf("Enter a 3-digit number: ");
    scanf("%d",&a);
    printf("Result= %d",sumdig(a));
    return 0;
}
int sumdig(int a)
{
    int dig1, dig2,dig3,result;
    dig1= (a/100);
    dig2= ((a/10)%10);
    dig3= (a%10);
    result= dig1+dig2+dig3;
    return (result);
}