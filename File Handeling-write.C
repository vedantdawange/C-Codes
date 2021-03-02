#include <stdio.h>

void main()
{
    FILE *f1;
    char grade, fname[20], sname[20], city[10];
    f1 = fopen("Outpu.txt", "w");

    printf("\nEnter Grade: ");
    grade = getchar();
    putc(grade, f1);
    // putc("\n",f1);

    printf("\n Enter First Name");
    scanf("%s", fname);
    fprintf(f1, "%s", fname);

    printf("\n Enter Surname Name");
    scanf("%s", sname);
    fprintf(f1, "%s", sname);

    printf("\nEnter The Name Of Your City: ");
    scanf("%s", city);
    fwrite(city, 6, 1, f1);

    fclose(f1);

    getch();
}