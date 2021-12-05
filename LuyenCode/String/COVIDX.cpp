#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ll long long

ll DayCaculator(ll initCase, ll *infectedArray, ll *curedArray, ll size) {
  ll day = -1;
  ll infectedCase = initCase;
  for(ll i = 0 ; i < size ; i++)
  {
    infectedCase += (infectedArray[i] - curedArray[i]);
    if(infectedCase <= 0)
    {
      day = i + 1;
      break;
    }
  }
  return day;
}

void input(ll *array, ll size) {
  for(ll i = 0 ; i < size ; i++)
  {
    scanf("%lli",&array[i]);
  }
}

int main() {

  ll initCase, dayNum;
  scanf("%lli %lli",&initCase, &dayNum);

  ll infectedArray[dayNum], curedArray[dayNum];
  input(infectedArray,dayNum);
  input(curedArray,dayNum);

  printf("%lli\n",DayCaculator(initCase,infectedArray,curedArray,dayNum));

  return 0;
}