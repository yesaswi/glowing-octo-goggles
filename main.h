#include "rand.h"
#include "delay.h"
#include <stdbool.h>

void randomStringGenerator(){
srand ( time(0) );
FILE *fp;
fp = fopen("test.txt","a");
if(fp == NULL)
  printf("Couldn't Open the file\n");
  for(int i = 0; i < 300 ; i++){
    fputs(randomString(),fp);
    fputs("\n",fp);
    delay(10);
}
  fclose(fp);
  printf("Strings Generated\n");
}

void readFile(){
  char data[100];
  FILE *fp;
  fp = fopen ("test.txt","r");
  if ( fp == NULL)
    printf("Couldn't find the file\n");
   while( fgets ( data, 100, fp ) != NULL )
    printf( "%s" , data ) ;
   fclose(fp) ;
}

bool coutNumberOfStringsInFile(){
  int count = 0;
    char data[100];
    FILE *fp;
    fp = fopen ("test.txt","r");
    if ( fp == NULL)
      printf("Couldn't find the file\n");
     while( fgets ( data, 100, fp ) != NULL )
      count++;
          fclose(fp) ;
  return count == 300?true:false;
}
