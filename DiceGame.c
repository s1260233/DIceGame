#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int dice1, dice2, total;

  printf("Rolling the dice...\n");

  //initialize random number
  srand(time(NULL));

  dice1 = rand() % 6 + 1;
  dice2 = rand() % 6 + 1;
  total = dice1 + dice2;

  printf("Die 1: %d\n", dice1);
  printf("Die 2: %d\n", dice2);
  printf("Total value: %d\n", total);

  if(total > 7) printf("You won!\n");
  else printf("You lost.\n");
  
  return 0;
}
