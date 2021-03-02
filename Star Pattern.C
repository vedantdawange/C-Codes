#include <stdio.h>
#include <conio.h>
main()
{
    int i, j, z, row;
    clrscr();
    printf("Enter the no. of rows=");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= (row - i); j++)
        {
            printf(" ");
        }
        for (z = 1; z <= i * 2 - 1; z++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return (0);
}