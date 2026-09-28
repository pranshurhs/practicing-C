#include<stdio.h>
int main() 
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if ((x  & (x-1)) == 0)
    {
        printf("%d is a power of 2", x);
    }
    else
    {
        printf("%d is not a power of 2", x);
    }
    return 0;
}