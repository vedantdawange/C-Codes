#include <stdio.h>

void main()
{
    FILE *f1;
    char grade, name[20], surname[20];
    f1 = fopen("Input.txt", "r");

    grade = getc(f1);
    printf("\n%c", grade);

    fscanf(f1, "%s", name);
    printf("\n%s", name);

    fgets(surname, 5, f1);
    printf("\n%s", surname);

    fclose(f1);

    getch();
}