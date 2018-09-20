//George Liang
//work03
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  srand(time(NULL));
  //Array Holds 10 ints
  int arr[10];

  for(int i = 0; i < 10; i++){
    arr[i] = rand();
  }
  //Change last value to 0 knowing arr is already a 10 element array
  arr[9] = 0;
  printf("The Elements in the first array are: ");
  for(int i = 0; i < 10; i++){
    printf("%d", arr[i]);
    if (i < 9){
      printf(", ");
    }
  }
  printf("\n");

  //Create second array
  int arr1[10];

  int *point = &arr[9];
  int *point1 = &arr1[0];
  for(int i = 0; i < 10; i++){
    *(point1 + i) = *(point-i);
  }

  printf("The Elements in the second array that is revsersed are: ");
  for(int i = 0; i < 10; i++){
    printf("%d", arr1[i]);
    if (i < 9){
      printf(", ");
    }
  }
  printf("\n");
}
