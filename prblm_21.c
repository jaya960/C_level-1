#include<stdio.h>
int main()
{
    int a,x,result;
    printf("Enter the number: ");
    scanf("%d",&x);
    a= x%2;
    result= x -(a*5);
    printf("Result= %d",result);
    return 0;
}