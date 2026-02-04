#include <stdio.h>

int main()
{
    int i, n, count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
            count++;
    }

    printf("Count = %d\n", count);

    return 0;
}
