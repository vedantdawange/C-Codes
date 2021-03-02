#include <stdio.h>
#include <conio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int main()
{
    int a, b;
    clrscr();
    printf("Enter the value of a and b");
    scanf("%d%d", &a, &b);
    add(a, b);
    sub(a, b);
    mul(a, b);
    div(a, b);
    getch();
}

int add(int a, int b)
{
    int y;
    y = a + b;
    printf("Addition= %d", y);
    return;
}

int sub(int a, int b)
{
    int x;
    x = a - b;
    printf("Subtraction= %d", x);
    return;
}
int mul(int a, int b)
{
    int z;
    z = a * b;
    printf("Multiplication= %d", z);
    return;
}
int div(int a, int b)
{
    int v;
    v = a / b;
    printf("Division= %d", v);
    return;
}