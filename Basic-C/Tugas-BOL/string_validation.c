//
//  string_validation.c
//  Tugas-BOL
//
//  Created by Uwais Alqadri on 9/5/22.
//

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int string_validation() {
  char string[100] = "";
  char c;
  int islowercase_vowel, isuppercase_vowel;
  int total_vowel = 0, total_consonant = 0;

  printf("Masukkan kalimat = ");
  scanf("%[^\n]s", string);

  int length = strlen(string);
  printf("Panjang kalimat = %d \n", length);

  for(int i = 0; i < length; i++) {
    c = string[i];

    islowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    isuppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))
      continue;
    else if (islowercase_vowel || isuppercase_vowel)
      total_vowel++;
    else
      total_consonant++;
  }

  printf("Jumlah huruf vokal = %d \n", total_vowel);
  printf("Jumlah huruf konsonan = %d \n\n\n", total_consonant);

  return 0;
}
