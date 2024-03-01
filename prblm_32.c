#include<stdio.h>
int main()
{
    int x,y,sum,diff;
    printf("Enter first 2-digit number: ");
    scanf("%d",&x);
    printf("Enter second 2-digit number: ");
    scanf("%d",&y);
    sum= x+y;
    if(sum<100)
    printf("Sum= %d",sum);
    else 
    {
        if(x>y)
        diff= x-y;
        else
        diff= y-x;
        printf("Difference= %d",diff);
    }
    return 0;
}