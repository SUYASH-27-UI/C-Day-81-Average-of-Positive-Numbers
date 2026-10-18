#include <stdio.h>

int main()
{
    int n, number, search;
    int count = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter the number to search: ");
    scanf("%d", &search);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number == search)
        {
            count++;
        }
    }

    printf("Number %d occurs %d times.", search, count);

    return 0;
}
