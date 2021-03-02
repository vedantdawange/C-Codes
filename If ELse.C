

#include <stdio.h>
#include <conio.h>
#include <math.h>
float main()
{
    float P, M, C, avg;
    clrscr();
    printf("Enter the physics marks=");
    scanf("%f", &P);
    printf("Enter the mathematics marks=");
    scanf("%f", &M);
    printf("Enter the Chemistry marks=");
    scanf("%f", &C);
    avg = (P + C + M) / 3;
    if (avg > 90)
        printf("GRADE OBTAINED=A+");
    else if (avg > 80 && avg < 90)
        printf("GRADE OBTAINED=A");
    else if (avg > 70 && avg < 80)
        printf("GRADE OBTAINED=B+");
    else if (avg > 60 && avg < 70)
        printf("GRADE OBTAINED=B");
    else if (avg > 50 && avg < 60)
        printf("GRADE OBTAINED=C+");
    else if (avg > 40 && avg < 50)
        printf("GRADE OBTAINED=C");
    else
        printf("FAIL");
    getch();
    return (0);
}