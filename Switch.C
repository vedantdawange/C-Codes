#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, A = 0, S = 0, M = 0, D = 0;
    clrscr();
    do
    {
        printf("Enter the value=");
        scanf("%d", &a);
        printf("Enter the value=");
        scanf("%d", &b);
        printf("Choose your option:\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Exit");
        scanf("%d", &opt);
        if (opt == 5)
        {
            break;
        }
        switch (opt)
        {
        case 1:
        {
            A = a + b;
            printf("Addition is=%d", A);
            break;
        }
        case 2:
        {
            S = a - b;
            printf("Subtraction is=%d", S);
            break;
        }
        case 3:
        {
            M = a * b;
            printf("Multiplication is=%d", M);
            break;
        }
        case 4:
        {
            D = a / b;
            printf("Division is=%d", D);
            break;
        }
        }
    } while (opt != 5);
    getch();
    return 0;
}