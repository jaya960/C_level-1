#include<stdio.h>
int main()
{
    int x,a,result;
    printf("Enter a number: ");
    scanf("%d",&x);
    a= (x/100)+((x/10)%10)+(x%10);
    if (a==10)
    printf("Success");
    else 
    printf("Failure");
    return 0;
}