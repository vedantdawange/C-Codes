#include <conio.h>
#include <stdio.h>
struct stdinfo
{
  int sub[5];
  int total;
  int avg;
  char grade;
};
void main()
{
  int n, j;
  struct stdinfo student;
  clrscr();
  printf("Enter marks of student \n");
  student.total = 0;
  for (j = 0; j < 5; j++)
  {
    scanf("%d", &student.sub[j]);
    student.total += student.sub[j];
  }
  student.avg = student.total / 5;
  if (student.avg >= 70)
    student.grade = 'A';
  else
    student.grade = 'B';
  for (j = 0; j < 5; j++)
  {
    printf("%d\t", student.sub[j]);
  }
  printf("Total is %d\t", student.total);
  printf("Avg is %d\t", student.avg);
  printf("Grade %c\t", student.grade);
  getch();
}