#include <stdio.h>
#include <conio.h>
int add(int *a, int *b)
{
    int res;
    res = (*a) + (*b);
    printf("Sum is %d\n", res);
    return 0;
}
int sub(int *a, int *b)
{
    int res;
    res = (*a) - (*b);
    printf("Difference is %d\n", res);
    return 0;
}
int multi(int *a, int *b)
{
    int res;
    res = (*a) * (*b);
    printf("Product is %d\n", res);
    return 0;
}
int div(int *a, int *b)
{
    int res;
    res = (*a) / (*b);
    printf("Div is %d\n", res);
    return 0;
}
main()
{
    int c, d;
    clrscr();
    printf("Enter two no.s ");
    scanf("%d%d", &c, &d);
    add(&c, &d);
    sub(&c, &d);
    multi(&c, &d);
    div(&c, &d);
    getch();
}