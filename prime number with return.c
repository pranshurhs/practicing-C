#include <stdio.h>
// the basic data types are int(%d),float(%f),char(%c),double(%lf) int their bit sizes are 4,4,1 and 8
// the prededence is () > % > *,/ > +,- > == and the associativity is first the operation in bracket is prioritized then the left operations and then the right

    int primechecker(int z)
    {
    for(int n = 2;z%n!=0;n++)
    {
        if(z%n==0)
        {
            return 2;
        } 
        else
        {
            return 1;
        }
    }
    }
    int main()
    {
        int z;
        scanf("%d",&z);
        printf("%d",primechecker(z));
        if (primechecker(z)==1)
        {
            printf("The number is prime");
        }
        else
        {
            printf("The number is not prime");
        }
         return 0;
    }
    
    


