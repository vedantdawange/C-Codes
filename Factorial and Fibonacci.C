#include <stdio.h>
#include <conio.h>
int fact(int a)
{

    if (a <= 1)
        return 1;
    else
        return (a * fact(a - 1));
}
int fibbo(int b)
{
    if (b == 0)
        return 0;
    else if (b == 1)
        return 1;
    return (fibbo(b - 1) + fibbo(b - 2));
}
main()
{
    int s, i;
    clrscr();
    printf("Enter no. whose factorial req. \n");
    scanf("%d", &s);
    printf("The factorial of %d is %d\n", s, fact(s));
    printf("fibbonacci is ");
    for (i = 0; i < s; i++)
        printf(" %d ", fibbo(i));
    getch();
}