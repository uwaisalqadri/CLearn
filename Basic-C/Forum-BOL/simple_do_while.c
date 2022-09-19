//
//  simple_do_while.c
//  Basic-C
//
//  Created by Uwais Alqadri on 9/19/22.
//

#include <stdio.h>

int main() {
  int total = 100, index = 0;

  do {
    index += 1;
  } while (index < total);

  printf("Perhitungan: %d \n", index);

  return 0;
}
