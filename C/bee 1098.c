#include <stdio.h>

int main()
{
    float i = 0;
    float j = 1;
    while (i <= 2.2)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("I=%.2g J=%.2g\n", i, j++);
        }

        i += 0.2;
        j = i + 1;
    }

    return 0;
}