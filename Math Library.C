
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
  int a, opt, b;
  clrscr();

  do
  {
    printf("Enter your option 1.sqrt(x)\n 2.pow(x,y)\n 3.tan(x)\n 4.cos(x)\n 5.sin(x)\n");
    scanf("%d", &opt);
    if (opt == 6)
    {
      break;
    }
    switch (opt)

    {
    case 1:
    {
      printf("Enter the value =");
      scanf("%d", &a);
      printf("SQURE ROOT=%d", sqrt(a));
      break;
    }
    case 2:
    {
      printf("Enter the value of a and b=");
      scanf("%d%d", &a, &b);
      printf("power=%d", pow(a, b));
      break;
    }

    case 3:
    {
      printf("Enter the value ");
      scanf("%d", &a);
      printf("tan=%d", tan(a));
      break;
    }

    case 4:
    {
      printf("Enter the value ");
      scanf("%d", &a);
      printf("sin=%d", sin(a));
      break;
    }
    case 5:
    {
      printf("Enter the value ");
      scanf("%d", &a);
      printf("cos=%d", cos(a));
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
