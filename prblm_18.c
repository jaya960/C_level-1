#include<stdio.h>
int main()
{
    int a,result;
    printf("Enter a 2-digit number: ");
    scanf("%d",&a);
    result= 1*10+ (a%10);
    printf("Result= %d",result);
    return 0;
}