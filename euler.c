#include <stdio.h>
#include <stdlib.h>

int problem1();
int problem5();
int problem6();

/*Find the sum of all the multiples of 3 or 5 below 1000.*/
int problem1(){
  int sum = 0;
  int x;
  for(x = 3; x < 1000; x++){
    if(x % 5 == 0 || x % 3 == 0){
      sum += x ;
    }
  }
  return sum ;
}
/*What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/
int problem5(){
  int x = 2;
  while(!(x % 1 == 0 && x % 2 == 0 && x % 3 == 0 && x % 4 == 0 && x % 5 == 0 &&
    x % 6 == 0 && x % 7 == 0 && x % 8 == 0 && x % 9 == 0 && x % 10 == 0 &&
    x % 11 == 0 && x % 12 == 0 && x % 13 == 0 && x % 14 == 0 && x % 15 == 0
    && x % 16 == 0 && x % 17 == 0 && x % 18 == 0 && x % 19 == 0 && x % 20 == 0)){
    x++;
  }
  return x;
}

/*Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/
int problem6(){
  int sumSquare = 0;
  int squareSum = 0;
  int x;
  for(x = 1; x <= 100; x++){
    sumSquare += x * x;
    squareSum += x;
  }
  squareSum = squareSum * squareSum;

  return squareSum - sumSquare;
}

int main(){
  printf("Problem 1: %d\n", problem1());
  printf("Problem 5: %d\n", problem5());
  printf("Problem 6: %d\n", problem6());
  return 0;
}
