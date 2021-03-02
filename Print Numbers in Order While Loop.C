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
    num = l;
    while (l <= u)
    {
        printf("%d ", num);
        num++;
    }
    getch();
    return (0);
}