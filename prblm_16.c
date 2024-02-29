#include<stdio.h>
int rev(int);
int main()
{
    int a;
    printf("Enter a 4-digit number: ");
    scanf("%d",&a);
    printf("Result= %d",rev(a));
    return 0;
}
int rev(int a)
{
    int dig1,dig2,dig3,dig4,result;
    dig1= (a%10);
    dig2= ((a/10)%10);
    dig3= ((a/100)%10);
    dig4= (a/1000);
    result= dig3*1000+dig4*100+dig2*10+dig1;
    return (result);
}