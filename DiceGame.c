#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int d1,d2,d3,sum;
  char name[30];

  printf("What is our name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);

  printf("\nRolling the dice...\n");  
  srand(time(NULL));
  d1=rand()%6+1;
  d2=rand()%6+1;
  d3=rand()%6+1;
  sum=d1+d2+d3;
  printf("Die 1: %d\nDie 2: %d\nDie 3: %d\nTotal value: %d\n\n",d1,d2,d3,sum);

  if(sum>9)printf("%s won!\n",name);
  else printf("%s lost!\n",name);
  
  return 0;
}
