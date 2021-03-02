#include <stdio.h>
#include <conio.h>
main()
{
    int marks[100], sum = 0, n, i;
    clrscr();
    printf("Enter the value of n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }
    printf("addition=%d", sum);
    getch();
    return (0);
}