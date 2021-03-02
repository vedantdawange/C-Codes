#include <stdio.h>
#include <conio.h>
union abc
{
    int a, b;
} t;
main()
{
    clrscr();
    t.a = 2;
    printf("After making a=2\n  a=%d, b=%d\n", t.a, t.b);
    t.b = 10;
    printf("After making b=10\n a=%d, b=%d\n", t.a, t.b);
    getch();
}
