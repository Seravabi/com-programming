#include <stdio.h>

int main()
{
  int set, n = 0, l = 0, lm = 0, la = 0, a = 0, e = 0, i;
  char name[50];
  double in, out;
  scanf("%d", &set);
  for (i = 1; i <= set; i++)
  {
    scanf("%s %lf %lf", name, &in, &out);
    if ((in >= 7.00) && (in <= 8.30))
    {
      if ((out >= 12.01) && (out <= 15.59))
      {
        la++;
      }
      else if ((out >= 16.00) && (out <= 18.00))
      {
        n++;
      }
      else
        e++;
    }
    else if ((in >= 8.31) && (in <= 9.00))
    {
      if ((out >= 12.01) && (out <= 15.59))
      {
        la++;
      }
      else if ((out >= 16.00) && (out <= 18.00))
      {
        l++;
      }
      else
        e++;
    }
    else if ((in >= 9.01) && (in <= 12.00))
    {
      if ((out >= 12.01) && (out <= 15.59))
      {
        a++;
      }
      else if ((out >= 16.00) && (out <= 18.00))
      {
        lm++;
      }
      else
        e++;
    }
    else
      e++;
  }
  if (n == 0)
    printf("N -\n");
  else
    printf("N %d\n", n);

  if (l == 0)
    printf("L -\n");
  else
    printf("L %d\n", l);

  if (lm == 0)
    printf("LM -\n");
  else
    printf("LM %d\n", lm);

  if (la == 0)
    printf("LA -\n");
  else
    printf("LA %d\n", la);

  if (a == 0)
    printf("A -\n");
  else
    printf("A %d\n", a);

  if (e == 0)
    printf("E -\n");
  else
    printf("E %d\n", e);
  return 0;
}