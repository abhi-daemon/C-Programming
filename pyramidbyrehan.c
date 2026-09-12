#include <stdio.h>

int main()
{
    int height;

    printf("Enter Your Height");
    scanf("%d", &height);
    if (height < 1 && height > 8)
    {
        printf("INPUT SHOULD BE BETWEEN 1 AND 8 BOTH INCLUSIVE");
        return 1;
    }
    else
    {
        int hash = 1;
        int space = 1 + height - hash;

        while (space > 0)
        {
            while (space > 1)
            {
                printf(" ");
                space--;
            }

            space = height - hash;

            while (hash > 0)
            {
                printf("#");
                hash--;
            }

            printf("  ");

            while (hash < height - space)
            {
                printf("#");
                hash++;
            }

            hash++;

            printf("\n");
        }
    }
    
    return 0;
}