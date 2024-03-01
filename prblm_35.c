#include<stdio.h>
int main()
{
    int x,y,ones_x,ones_y,tens_x,tens_y,hund_x,hund_y,sum;
    printf("Enter 1st 3-digit number: ");
    scanf("%d",&x);
    printf("Enter 2nd 3-digit number: ");
    scanf("%d",&y);
    ones_x= x%10;
    ones_y= y%10;
    tens_x= (x/10)%10;
    tens_y= (y/10)%10;
    hund_x= x/100;
    hund_y= y/100;
    if ((ones_x+hund_x)>(ones_y+hund_y))
    {
        sum= ones_x+tens_x+hund_x;
    }
    else
    {
        sum= ones_y+tens_y+hund_y;
    }
    printf("Result= %d",sum);
    return 0;
}