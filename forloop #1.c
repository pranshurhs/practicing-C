#include <stdio.h>
int main()
{
    char sex[100] = "ZA WARUDO";
    for(int i = 0;sex[i] != '\0';i++)
    {
        if (sex[i] == 'U')
        {
            printf("%c\n",sex[i]);
            printf("found U\n");
            return 0;
        }
    }
    return 0;
}