//
//  array_search_index.c
//  Basic-C
//
//  Created by Uwais Alqadri on 10/19/22.
//

#include <stdio.h>

int* sort_array(int size, int* arr) {

  int i, j, tmp;

  for(i=0; i<size; i++) {
    for(j=i+1; j<size; j++) {
      if(arr[j] <arr[i]) {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
      }
    }
  }

  return arr;
}

int main() {
  int length;
  int query_number;
  int is_number_not_found = 1;
  int* sorted_numbers;

  printf("Input jumlah elemen Array: "); scanf("%d", &length);

  int numbers[length - 1];

  printf("Input %d angka (dipisah dengan enter): \n", length);

  for (int i = 0; i < length; i++) {
    scanf("%d", &numbers[i]);
  }

  printf("Input angka yang akan dicari: "); scanf(" %d", &query_number);

  sorted_numbers = sort_array(length, numbers);

  for (int i = 0; i < length; i++) {
    if (sorted_numbers[i] == query_number) {
      printf("Angka ditemukan pada index ke - %d \n", i);
      is_number_not_found = 0; // false
      break;

    } else {
      is_number_not_found = 1; // true
    }
  }

  if (is_number_not_found == 1) printf("Angka tidak ditemukan \n");

  printf("Urutan angka yang diinputkan : ");

  for (int i = 0; i < length; i++) printf("%d ", sorted_numbers[i]);

  printf("\n\n");

  return 0;
}
