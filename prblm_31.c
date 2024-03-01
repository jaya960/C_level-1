#include<stdio.h>
int main()
{
    int x,sum;
    printf("Enter a number: ");
    scanf("%d",&x);
    sum= (x/100)+ ((x/10)%10)+ (x%10);
    if(sum>=10)
    {
         sum= (sum/10)+(sum%10);
          if(sum>=10)
    {
         sum= (sum/10)+(sum%10);
    }
    }
    printf("Result= %d",sum);
    return 0;
}