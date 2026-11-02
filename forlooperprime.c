#include<stdio.h>
int prime(int n)
{
    for(int i =2;i <n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int digitladder(int x)
{
    int sum=0;
    for(int i = x;i>0;i/=10)
    {
        sum += i%10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    if (prime(n))
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is not a prime number\n",n);
    }
    printf("The sum of the digits of %d is %d\n",n,digitladder(n));
    return 0;

}
