#include "main.h"

int main(int argc, char const *argv[]) {
  randomStringGenerator();
  readFile();
  printf("%d\n", coutNumberOfStringsInFile());
  return 0;
}
