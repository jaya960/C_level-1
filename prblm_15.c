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
    result= dig1*1000+dig2*100+dig3*10+dig4;
    return(result);
}