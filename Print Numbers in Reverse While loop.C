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
    num = u;
    do
    {
        printf("%d ", num);
        num--;
    } while (num >= l);
    getch();
    return (0);
}