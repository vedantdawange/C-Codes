#include <stdio.h>
#include <conio.h>
int sum(int *p, int N)
{
    int i, ad = 0;
    for (i = 0; i < N; i++)
    {
        ad = ad + *(p + i);
    }
    printf("Sum is %d", ad);
    return 0;
}
main()
{
    int i, ar[20], N;
    clrscr();
    printf("Enter no of elements");
    scanf("%d", &N);
    printf("Enter no.'s");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }
    sum(ar, N);
    getch();
}