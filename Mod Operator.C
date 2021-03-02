#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, Q = 0, R = 0;
    clrscr();
    printf("Enter the value=");
    scanf("%d", &a);
    printf("Enter the value=");
    scanf("%d", &b);
    Q = a / b;
    R = a % b;
    printf("QUOTIENT=%d\n", Q);
    printf("REMAINDER=%d", R);
    getch();
}