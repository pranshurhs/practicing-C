#include <stdio.h>
int main()
{
    int x, z, w;
    printf("Enter a number to get the square of numbers from that number down to 65 in decrements of 5: ");
    scanf("%d", &w);
    for(x  = w; x != 65 && x <= 100 && x >= 65; x -= 5) 
    {
        z = x*x;
        printf("The square of %d is %d\n", x, z);
    }
}