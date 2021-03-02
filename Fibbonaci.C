#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, x, y, z;
    clrscr();
    printf("Enter the value of n=");
    scanf("%d", &n);
    x = 0;
    y = 1;

    printf("Fabinacco Series=");
    printf("%d %d ", x, y);
    for (i = 2; i <= n; i++)
    {
        z = x + y;
        x = y;
        y = z;

        printf("%d ", z);
    }
    getch();
    return 0;
}