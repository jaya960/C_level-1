#include<stdio.h>
int main()
{
    int a,result;
    printf("Enter a 3-digit number: ");
    scanf("%d",&a);
    result= (a/100)*100 + 0*10 + (a%10);
    printf("Result= %d",result);
    return 0;
}