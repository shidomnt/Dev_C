#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int SpaceCounter(const char *string)
{
  int SpaceCount = 0;
  int StringLength = strlen(string);
  if (string[0] == 32)
  {
    SpaceCount++;
  }

  for (int i = 0; i < StringLength - 1; i++)
  {
    if (string[i] != 32 && string[i + 1] == 32)
      SpaceCount++;
  }
  return SpaceCount;
}

void Print(int *array, int size)
{
  for(int i = 0 ; i < size ; i++){
    printf("%d\n",array[i]);
  }
  return;
}

int main()
{
  int T = 0;
  scanf("%d", &T);
  getchar();
  int result[T];
  int index = 0;
  while (T)
  {
    char *string = (char *)malloc(sizeof(char) * 1001);
    fgets(string, 1001, stdin);
    result[index++] = SpaceCounter(string);
    free(string);
    T--;
  }
  Print(result, index);
  return 0;
}