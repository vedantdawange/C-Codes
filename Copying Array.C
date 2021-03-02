#include <stdio.h>
#include <conio.h>
main()
{
    int marks[100], copy[100], n, i, z;
    clrscr();
    printf("Enter the value of elements");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (z = 0, i = n - 1; i >= 0; i--, z++)
    {
        copy[z] = marks[i];

        printf("%d", copy[z]);
    }

    getch();
    return (0);
}