#include <stdio.h>
#include <conio.h>
int main()
{
  int opt, a, b;
  clrscr();
  do
  {
    printf("\n choose ur option 1.AND\n 2.OR\n 3.XOR\n 4.LEFT SHIFT\n 5.RIGHT SHIFT\n");
    scanf("%d", &opt);
    if (opt == 6)
    {
      break;
    }
    switch (opt)
    {
    case 1:
    {
      printf("Enter the value of a and b");
      scanf("%d%d", &a, &b);
      printf("AND is=%d", a & b);
      break;
    }
    case 2:
    {
      printf("Enter the value of a and b");
      scanf("%d%d", &a, &b);
      printf("OR is=%d", a | b);
      break;
    }
    case 3:
    {
      printf("Enter the value of a and b");
      scanf("%d%d", &a, &b);
      printf("XOR is=%d", a ^ b);
      break;
    }
    case 4:
    {
      printf("Enter the value of a");
      scanf("%d", &a);
      printf("LEFT SHIFT is=%d", a << 2);
      break;
    }
    case 5:
    {
      printf("Enter the value of a");
      scanf("%d", &a);
      printf("RIGHT SHIFT is=%d", a >> 2);
      break;
    }
    default:
    {
      printf("INVALID OPTION");
      break;
    }
    }
  } while (opt != 6);

  getch();
  return (0);
}