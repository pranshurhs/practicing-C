#include<stdio.h>
int main()
{
    int bal,x;
    printf("enter the amount to be deposited: ");
    scanf("%d",&x);
    bal=bal+x;
    if (x<=0)
    {
        printf("invalid amount");
    }
    else if(x%100 !=0)
    {
        printf("amount must be in multiples of 100");
    }
    else if (x>20000)
    {
        printf("daily limit exceeded");
    }
    else
    {
        printf("withdrawal successful");
    }
    printf("\ncurrent balance is: %d\n",bal);
    return 0;
}