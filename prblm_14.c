#include<stdio.h>
int rev(int);
int main()
{
    int a;
    printf("Enter a 3-digit number: ");
    scanf("%d",&a);
    printf("Result= %d",rev(a));
    return 0;
}
int rev(int a)
{
    int dig1,dig2,dig3,result;
    dig1= (a%10);
    dig2= ((a/10)%10);
    dig3= (a/100);
    result= dig1*100+dig2*10+dig3;
    return(result);
}