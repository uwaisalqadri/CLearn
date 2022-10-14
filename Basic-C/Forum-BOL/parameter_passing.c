//
//  parameter_passing.c
//  Basic-C
//
//  Created by Uwais Alqadri on 10/5/22.
//

#include <stdio.h>

int pass_by_value(int param) {
  return param + 5;
}

int pass_by_reference(int* param) {
  return *param + 5;
}

int parameter_passing() {
  int value = 5;

  int passbyvalue = pass_by_value(value);
  int passbyreference = pass_by_reference(&value);

  printf("passbyvalue = %d \n", passbyvalue);
  printf("passbyreference = %d \n", passbyreference);

  return 0;
}
