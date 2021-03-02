#include <stdio.h>
#include <conio.h>
main()
{
  int max = 0, min = 0, n, i;
  clrscr();
  printf("Enter the value of n");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", marks[i]);
  }
  min = marks[0];
  max = marks[0];
  for (i = 0; i > n; i++)
  {
    if (marks[i] > max)
    {
      max = marks[i]
    }
    if (marks[i] < min)
    {
      min = marks[i]
    }
    getch();
    return (0);
  }