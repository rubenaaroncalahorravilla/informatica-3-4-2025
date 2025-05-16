#include <stdio.h>

int main() {
  // Example: Print numbers from 1 to 10
  /*int i;

  for (i = 1; i < 21; ++i)
  {
    printf("%d ", i);
  }
  return 0;*/
  
  // Exercise 1
  int n;
  printf("Enter a positive number: ");
  scanf(" %d", &n);

  int i;
  int sum = 0;
  for (i = 1; i < n + 1; ++i){
    sum = sum + i;
  }
  printf("%d \n", sum);
}

