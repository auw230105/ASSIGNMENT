#include <stdio.h>

int main()
{
    int age, student;
    int price;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter student status (1 for student, 0 for non-student): ");
    scanf("%d", &student);

    if (age < 12)
    {
        price = 50;
    }
    else if (age <= 60)
    {
        if (student == 1)
            price = 80;
        else
            price = 100;
    }
    else
    {
        price = 60;
    }

    printf("Ticket Price = %d\n", price);

    return 0;
}
