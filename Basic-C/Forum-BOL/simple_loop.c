//
//  simple_loop.c
//  Basic-C
//
//  Created by Uwais Alqadri on 9/19/22.
//

#include <stdio.h>
#include <string.h>

int simple_loop() {
  char input[1000] = "";

  printf("Masukkan Satu Kata: "); scanf("%s", input);

  int length = strlen(input);
  for(int i = 0; i <= length; i++) {
    char c = input[i];
    printf("%c \n", c);
  }

  return 0;
}
