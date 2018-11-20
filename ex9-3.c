#include <stdio.h>
#define NSIZE 8
#define MSIZE 7

int main(void)
{
    int i, j;
    int data[8][7] = {{0, 0, 1, 1, 1, 0, 0},
                      {0, 0, 1, 1, 1, 0, 0},
                      {0, 0, 1, 1, 1, 0, 0},
                      {0, 0, 0, 1, 0, 1, 0},
                      {0, 1, 1, 1, 1, 1, 0},
                      {0, 1, 0, 1, 0, 0, 0},
                      {0, 0, 1, 0, 1, 0, 0},
                      {0, 1, 0, 0, 0, 1, 0}};

    for (i = 0; i < NSIZE; i++)
    {
        for (j = 0; j < MSIZE; j++)
        {
            if (data[i][j] == 0)
            {
                printf("x");
            }
            else
            {
                printf("o");
            }
        }
        printf("\n");
    }
    return 0;
}
