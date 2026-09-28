#include <stdio.h>
int main() 
{
    int X;
    scanf("%d", &X);
    if (X < 150)
    printf("too small, try again\n");
    else if (X <= 150)
    printf("just right\n");
    return 0;
}