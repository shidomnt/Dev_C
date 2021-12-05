#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int MAX_CHAR = 1000;

int PointCaculator(char *result)
{
  int points = 0;
  int resultLength = strlen(result);
  int combo = 1;
  for (int i = 0; i < resultLength; i++)
  {
    if (result[i] == 'C')
    {
      points += combo;
      if (result[i + 1] == 'C')
        combo++;
      else
        combo = 1;
    }
  }
  return points;
}

int main()
{

  char *result = (char *)malloc(sizeof(char) * MAX_CHAR);

  scanf("%s", result);

  printf("%d\n", PointCaculator(result));

  return 0;
}