#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

int intN(int n) {
 return rand() % n;
}

int RandomNumberGenerator(const int nMin, const int nMax)
{
  int nRandonNumber = 0;
  nRandonNumber = rand()%(nMax-nMin) + nMin;
  return nRandonNumber;
}

char *randomString() {
  int len = RandomNumberGenerator(8,32);
  char *rstr = malloc((len + 1) * sizeof(char));
  for (int i = 0; i < len; i++) {
    rstr[i] = alphabet[intN(strlen(alphabet))];
  }
  rstr[len] = '\0';
  return rstr;
}
