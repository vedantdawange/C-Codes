#include <stdio.h>
#include <conio.h>
main()
{
    int i, j, z, row;
    clrscr();
    printf("Enter the no. of rows=");
    scanf("%d", &row);
    for (i = row; i >= 1; i--)
    {
        for (j = row - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (z = i * 2 - 1; z >= 1; z--)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return (0);
}