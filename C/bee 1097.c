#include <stdio.h>

int main()
{
    int i = 1;
    int j = 7;
    while (i != 11)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("I=%d J=%d\n", i, j--);
        }
        i += 2;
        j = i + 6;
    }

    return 0;
}