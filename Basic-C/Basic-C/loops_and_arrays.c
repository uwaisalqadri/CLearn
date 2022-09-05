//
//  arrays.c
//  Basic-C
//
//  Created by Uwais Alqadri on 8/26/22.
//

#include <stdio.h>

void for_loops(void) {
  printf("<==== FOR LOOPS ====> \n");

  int index;
  for (index = 0; index < 10; index++) {
    printf("%d\n", index);
  }
}

void while_loops(void) {
  printf("<==== WHILE LOOPS ====> \n");

  int index = 0;
  while (index < 10) {
    index++;
    printf("%d\n", index);
  }
}

void while_break_loops(void) {
  printf("<==== WHILE BREAK LOOPS ====> \n");

  int n = 0;
  while (1) {
    n++;
    if (n == 10) {
      break;
    }
  }
}

void while_continue_loops_for_odds(void) {
  printf("<==== WHILE CONTINUE ODDS LOOPS ====> \n");

  int n = 0;
  while (n < 10) {
    n++;

    /* check that n is odd */
    if (n % 2 == 1) {
      /* go back to the start of the while block */
      continue;
    }

    printf("The number %d is even.\n", n);
  }
}


void loop_with_array(void) {
  int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int sum = 0;
  int index;

  for (index = 0; index < 10; index++) {
    sum += array[index];
  }

  printf("<==== LOOPS AND ARRAYS ====> \n");

  /* sum now contains a[0] + a[1] + ... + a[9] */
  printf("Sum of the array is %d\n", sum);
}



void basic_arrays(void) {
  int numbers[10];

  numbers[0] = 10;
  numbers[1] = 20;
  numbers[2] = 30;
  numbers[3] = 40;
  numbers[4] = 50;
  numbers[5] = 60;
  numbers[6] = 70;

  /* print the 7th number from the array, which has an index of 6 */
  printf("The 7th number in the array is %d \n", numbers[6]);
}

// type name[size1][size2]...[sizeN];
void multidimensional_arrays(void) {
  int foo[1][2][3];


}
