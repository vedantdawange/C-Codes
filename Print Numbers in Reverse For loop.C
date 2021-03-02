#include <stdio.h>
#include <conio.h>
main()
{
    int num, l, u;
    clrscr();
    printf("Enter the lower limit=");
    scanf("%d", &l);
    printf("Enter the upper limit=");
    scanf("%d", &u);
    for (num = u; num >= l; num--)
    {
        printf("%d ", num);
    }
    getch();
    return (0);
}