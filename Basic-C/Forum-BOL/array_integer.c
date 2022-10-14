//
//  array_integer.c
//  Basic-C
//
//  Created by Uwais Alqadri on 9/27/22.
//

#include <stdio.h>

int array_integer() {
  int numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int total = 10;

  for (int i = 0; i < total; i++) {
    printf("array[%d] = %d \n", i, numbers[i]);
  }

  return 0;
}
