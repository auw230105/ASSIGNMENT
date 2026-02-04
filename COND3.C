#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("First number is larger\n");
    else if (b > a)
        printf("Second number is larger\n");
    else
        printf("Both numbers are Equal\n");

    return 0;
}
