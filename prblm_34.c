#include<stdio.h>
int main()
{
    int x,y,tens_x,tens_y,ones,hundreds,diff;
    printf("Enter 1st 3-digit number: ");
    scanf("%d",&x);
    printf("Enter 2nd 3-digit number: ");
    scanf("%d",&y);
    tens_x= (x/10)%10;
    tens_y= (y/10)%10;
    if(tens_x>tens_y)
    {
        ones= x%10;
        hundreds= x/100;
    }
    else
    {
        ones= y%10;
        hundreds= y/100;
    }
    if(ones>hundreds)
    diff= ones- hundreds;
    else
    diff= hundreds- ones;
    printf("Result= %d",diff);
    return 0;
}