#include<stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int i, max = a[0];
    
    for(i = 1; i < 5; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Maximum element is %d\n", max);
    
    int u, imax=0, sum=0, x;
    printf("enter number of numbers\n");
    scanf("%d",&x);
    int lucius[x];
    printf("enter your goddamn digits lenny\n");
    
    for(u=0;u<x;u++)
    {
        scanf("%d",&lucius[u]);
        sum = sum + lucius[u];
        if(lucius[u] > imax)
        {
            imax = lucius[u];
        }
    }
    printf("Maximum element is %d\n", imax);
    printf("Sum of elements is %d", sum);
}
