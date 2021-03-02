#include <stdio.h>
#include <conio.h>
int main()
{
  int m1[10][10], m2[10][10], m3[10][10], r1, r2, c1, c2, i, j, opt;
  clrscr();

  printf("Enter the value of row and column of 1st matrix");
  scanf("%d%d", &r1, &c1);
  printf("Enter the value of row and column of 2nd matrix");
  scanf("%d%d", &r2, &c2);
  do
  {
    printf("Enter your option: 1.Addition 2.Subtraction 3.Division 4.Transpose\n 5.Exit");
    scanf("%d", &opt);
    if (opt == 5)
    {
      break;
    }
    switch (opt)
    {
    case 1:
    {
      if (r1 == r2 && c1 == c2)
      {
        printf("Enter the element of 1st matrix");
        for (i = 0; i < r1; i++)
        {
          for (j = 0; j < c1; j++)
          {
            scanf("%d", &m1[i][j]);
          }
          printf("\n");
        }
        printf("Enter the element of 2nd matrix");
        for (i = 0; i < r2; i++)
        {
          for (j = 0; j < c2; j++)
          {
            scanf("%d", &m2[i][j]);
          }
          printf("\n");
        }
        for (i = 0; i < r2; i++)
        {
          for (j = 0; j < c1; j++)
          {
            m3[i][j] = m1[i][j] + m2[i][j];
          }
          printf("\n");
        }
        for (i = 0; i < r2; i++)
        {
          for (j = 0; j < c1; j++)
          {
            printf("%d ", m3[i][j]);
          }
          printf("\n");
        }
      }
      break;
    }

    case 2:
    {
      if (r1 == r2 && c1 == c2)
      {
        printf("Enter the element of 1st matrix");
        for (i = 0; i < r1; i++)
        {
          for (j = 0; j < c1; j++)
          {
            scanf("%d", &m1[i][j]);
          }
          printf("\n");
        }
        printf("Enter the element of 2nd matrix");
        for (i = 0; i < r2; i++)
        {
          for (j = 0; j < c2; j++)
          {
            scanf("%d", &m2[i][j]);
          }
          printf("\n");
        }
        for (i = 0; i < r2; i++)
        {
          for (j = 0; j < c1; j++)
          {
            m3[i][j] = m1[i][j] - m2[i][j];
          }
          printf("\n");
        }
        for (i = 0; i < r2; i++)
        {
          for (j = 0; j < c1; j++)
          {
            printf("%d ", m3[i][j]);
          }
          printf("\n");
        }
      }
      break;
    }
    case 3:
    {
      if (r1 == r2 && c1 == c2)
      {
        printf("Enter the element of 1st matrix");
        for (i = 0; i < r1; i++)
        {
          for (j = 0; j < c1; j++)
          {
            scanf("%d", &m1[i][j]);
          }
          printf("\n");
        }
        printf("Enter the element of 2nd matrix");
        for (i = 0; i < r2; i++)
        {
          for (j = 0; j < c2; j++)
          {
            scanf("%d", &m2[i][j]);
          }
          printf("\n");
        }
        for (i = 0; i < r2; i++)
        {
          for (j = 0; j < c1; j++)
          {
            m3[i][j] = m1[i][j] / m2[i][j];
          }
          printf("\n");
        }
        for (i = 0; i < r2; i++)
        {
          for (j = 0; j < c1; j++)
          {
            printf("%d ", m3[i][j]);
          }
          printf("\n");
        }
      }
      break;
    }

    case 4:
    {
      printf("Enter the element of matrix");
      if (r1 == r2 && c1 == c2)
      {
        for (i = 0; i < r1; i++)
        {
          for (j = 0; j < c1; j++)
          {
            scanf("%d", &m1[i][j]);
          }
          printf("\n");
        }
        for (i = 0; i < r1; i++)
        {
          for (j = 0; j < c1; j++)
          {
            m2[i][j] = m1[j][i];
          }
          printf("\n");
        }
        for (i = 0; i < r1; i++)
        {
          for (j = 0; j < c1; j++)
          {
            printf(" %d", m2[i][j]);
          }
          printf("\n");
        }
        break;
      }
    }
    }
  } while (opt != 5);

  getch();
  return 0;
}
