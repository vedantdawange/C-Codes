#include <stdio.h>
#include <conio.h>

int minmax(int[], int);

int main()
{
  int i;
  int marks[100];
  int n;
  clrcsr();
  printf("Enter the no. of element");
  scanf("%d", &n);
  printf("Enter elements");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &marks[i]);
  }
  minmax(marks, n);
  getch();
}
int minmax(int marks[], int n)
{
  int min, max;
  int i;
  for (i = 0; i < n; i++)
  {
    if (marks[i] > max)
    {
      marks[i] = max;
    }
    if (marks[i] < min)
    {
      marks[i] = min;
    }
    printf("%d%d", min, max);
    return;
  }
}