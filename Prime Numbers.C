
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, i, n, flag;
    clrscr();
    printf("Enter the value of upper limit");
    scanf("%d", &a);
    printf("Enter the value of lower limit");
    scanf("%d", &b);
    printf("The prime numbers are");
    for (i = a; i <= b; i++)
    {
        flag = 0;
        for (n = 2; n <= i / 2; n++)
        {
            if (i % n == 0)
            {
                flag++;
                break;
            }
        }
        if (flag == 0 && i != 1)
        {
            printf(" %d", i);
        }
    }

    getch();
    return 0;
}