//
//  VariablesAndTypes.c
//  Basic-C
//
//  Created by Uwais Alqadri on 8/26/22.
//

#include <stdio.h>
#include <string.h>

#define bool char // typealias
#define FALSE 0
#define TRUE 1

// For numbers, we will usually use the type int. On most computers today, it is a 32-bit number, which means the number can range from -2,147,483,648 to 2,147,483,647.

int foo;
int bar = 1;

// The variable foo can be used, but since we did not initialize it, we don't know what's in it. The variable bar contains the number 1.

// Now, we can do some math. Assuming a, b, c, d, and e are variables, we can simply use plus, minus and multiplication operators in the following notation, and assign a new value to a:

void variables_types(void) {
  printf("<==== VARIABLES AND TYPES ====> \n");

  bool haha = FALSE;
  int a = 0, b = 1, c = 2, d = 3, e = 4; // kinda like swift, multiple declaration
  a = b - c + d * e;
  printf("%d %d \n", a, haha);
}

void string_comparison(void) {
  printf("<==== STRING COMPARISON ====> \n");

  char * name = "John";

  if (strncmp(name, "John", 4) == TRUE) {
    printf("Hello John!\n");
  } else {
    printf("You are not John. Go away.\n");
  }
}

void string_length(void) {
  printf("<==== STRING LENGTH ====> \n");
  char * name = "Nikhil";
  printf("%lu\n", strlen(name));
}

void string_concatenation(void) {
  printf("<==== STRING CONCATENATION ====> \n");
  char dest[20] = "Hello";
  char src[20] = "World";
  strncat(dest, src, 3);
  printf("%s\n",dest);
  strncat(dest,src,20);
  printf("%s\n",dest);
}
