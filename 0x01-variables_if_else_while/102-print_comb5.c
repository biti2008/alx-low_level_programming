Kflom Shre, [3/15/2022 9:00 AM]
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
  int c;
  int d = 0;

  while (d < 10)
  {
    c = 0;
    while (c < 10)
    {
      if (d != c && d < c)
      {
        putchar('0' + d);
        putchar('0' + c);

        if (c + d != 17)
        {
          putchar(',');
          putchar(' ');
        }
      }

      c++;
    }
    d++;
  }
  putchar('\n');
  return (0);
}

Kflom Shre, [3/15/2022 9:34 AM]
#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
  int c, i, k, j;

  for (c = 48; c <= 57; c++)
  {
    for (i = 48; i <= 57; i++)
    {
      for (k = 48; k <= 57; k++)
      {
        for (j = 48; j <= 57; j++)
        {
          if (((k + j) > (c + i) &&  k >= c) || c < k)
          {
            putchar(c);
            putchar(i);
            putchar(' ');
            putchar(k);
            putchar(j);
          if (c + i + k + j == 227 && c == 57)
          {
            break;
          }
          else
          {
            putchar(',');
            putchar(' ');
          }
          }
        }
      }
    }
  }
  putchar('\n');
  return (0);
}
