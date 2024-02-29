#include<stdio.h>
int main()
{
    int a,result;
    printf("Enter a 2-digit number: ");
    scanf("%d",&a);
    result= (a/10)*10+ 0;
    printf("Result= %d",result);
    return 0;
}