#include<stdio.h>
void primechecker(int z)
{
    for(int i=2;i<=z/2;i++)
    {
        if(z%i==0)
        {
            printf("%d is not a prime number\n",z);
        }
        else
        {
            printf("%d is a prime number\n",z);
        }
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    primechecker(num);
    return 0;
}