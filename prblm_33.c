#include<stdio.h>
int main()
{
    int x,y,ones,tens,sum;
    printf("Enter 1st number: ");
    scanf("%d",&x);
    printf("Enter 2nd number: ");
    scanf("%d",&y);
    if(x>y)
    {
        ones= x%10;
        tens= x/10;
    }
    else
    {
        ones= y%10;
        tens= y/10;
    }
    sum= ones+tens;
    printf("Result= %d",sum);
    return 0;
}
