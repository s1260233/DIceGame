#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 30

int main(){
  int dice1, dice2, total;
  char name[MAX]; //the max number of name characters is 30

  printf("What is your name?\n> ");
  scanf("%s", name);
  printf("Hello, %s!\n\n", name);
  
  printf("Rolling the dice...\n");

  //initialize random number
  srand(time(NULL));

  dice1 = rand() % 6 + 1;
  dice2 = rand() % 6 + 1;
  total = dice1 + dice2;

  printf("Die 1: %d\n", dice1);
  printf("Die 2: %d\n", dice2);
  printf("Total value: %d\n", total);

  if(total > 7) printf("%s won!\n", name);
  else printf("%s lost.\n", name);
  
  return 0;
}
