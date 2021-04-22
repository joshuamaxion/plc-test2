/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/**
Name:

CITATION:
Roussell, Michael April 2021

Mr,Umoja April 2021

Explanation of Code:
Also just like with anything make sure to comment the hell out of your code
*/

#include <stdio.h>
#include "time.h"
int main(void) {
  int arr[100][100];
  int *ptr = &arr[0][0];

  int i, j;
  clock_t start, stop;
  clock_t start1, stop1;

  start = clock();
  for(i = 0; i< 100;i++){
    for(j = 0; j< 100;j++){
      arr[i][j] = i + j;
    }    
  }
  stop = clock();

  printf("%ld\n", stop - start);

  start1 = clock();
  for(i = 0; i< 100 * 100;i++){
       *(ptr + i) = 0;
  }
  stop1 = clock();
  printf("%ld\n", (stop1- start1));
  return 0;
}