#include <stdio.h>
#include <conio.h>
#include <string.h>
struct sinfo
{
    char name[50];
    int sgpa;
    int roll;
};
void main()
{
    int n, i, j;
    struct sinfo student[20];
    clrscr();
    printf("Enter no. of students ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter name of student %d ", i + 1);
        scanf("%s", &student[i].name);
        printf("Enter SGPA of student %d ", i + 1);
        scanf("%d", &student[i].sgpa);
        printf("Enter roll no of student %d ", i + 1);
        scanf("%d", &student[i].roll);
    }
    printf("\n");
    for (j = 0; j < n; j++)
    {
        printf("Name is %s\n", student[j].name);
        printf("SGPA is %d\n", student[j].sgpa);
        printf("Roll no. is %d\n", student[j].roll);
        printf("\n");
    }
    getch();
}