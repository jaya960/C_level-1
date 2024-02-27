#include<stdio.h>
int rev(int);
int main()
{
    int a;
    printf("Enter a 2-digit number: ");
    scanf("%d",&a);
    printf("Result= %d",rev(a));
    return 0;
}
int rev(int a)
{
    int dig1,dig2,result;
    dig1= (a%10);
    dig2= (a/10);
    result= dig1*10+dig2;
    return(result);
}