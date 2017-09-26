#include <stdio.h>
#include <stdlib.h>

int main(){
  
  //set up random + array
  srand(time(NULL));
  
  int i = 0;
  int arr[10];

  for(; i < 9; i++){
    arr[i] = rand();
  }
  arr[9] = 0;
  
  //print out starter array
  printf("Array 1:\n");

  for(i = 0; i < 10; i++){
    printf("%d ", arr[i]);
 }
  
  //pointers + second array
  int *p = arr + 9;
  int arr2[10];
  int *p2 = arr2;

  //copy over array backwards
  for(i = 0; i < 10; i++){
    *p2 = *p;
    p2++;
    p--;
  }

  //print out new array
  printf("\nArray 2:\n");

  for(i = 0; i < 10; i++){
    printf("%d ", arr2[i]);
  }

  return 1;
}
