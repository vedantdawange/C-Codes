#include <stdio.h>
#include <conio.h>
int swap(int *a, int *b)
{
    int *s;
    *s = *a;
    *a = *b;
    *b = *s;
    printf("A is %d\n", *a);
    printf("B is %d", *b);
    return 0;
}
main()
{
    int c, d;
    clrscr();
    printf("Enter two no.s ");
    scanf("%d%d", &c, &d);
    swap(&c, &d);
    getch();
}