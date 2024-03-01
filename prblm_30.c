#include<stdio.h>
int main()
{
    int x,tens,hundreds,sum;
    printf("Enter a number: "); 
    scanf("%d",&x); 
    tens= (x/10)%10;
    hundreds= (x/100)%10;
    sum= tens+ hundreds;
    if(sum==10)
    {
        if(tens>7||hundreds>7)
        printf("Success");
        else
        printf("Failure");
    }
    else
    printf("Failure");
    return 0;
}