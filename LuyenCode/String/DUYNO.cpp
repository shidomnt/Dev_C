#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isDuyNo(char *string) {
  return string[0] == string[strlen(string) - 1] ? 1 : 0;
}

int main() {
  char n[20];
  while(scanf("%s", n) > 0) {
    if(isDuyNo(n)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}