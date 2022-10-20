//
//  array_search_index.c
//  Basic-C
//
//  Created by Uwais Alqadri on 10/19/22.
//

#include <stdio.h>

void print_reversed_array(int arr[], int n) {
  int temp;
  for(int i = 0; i<n/2; i++) {
    temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
  }
  for(int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int length;
  int query_number;
  int is_number_not_found = 1;

  printf("Input jumlah elemen Array: "); scanf("%d", &length);

  int numbers[length - 1];

  printf("Input %d angka (dipisah dengan enter): \n", length);

  for (int i = 0; i < length; i++) {
    scanf("%d", &numbers[i]);
  }

  printf("Input angka yang akan dicari: "); scanf(" %d", &query_number);

  for (int i = 0; i < length; i++) {
    if (numbers[i] == query_number) {
      printf("Angka ditemukan pada index ke - %d \n", i);
      is_number_not_found = 0; // false
      break;

    } else {
      is_number_not_found = 1; // true
    }
  }

  if (is_number_not_found == 1) printf("Angka tidak ditemukan \n");

  printf("Urutan angka yang diinputkan : ");

  print_reversed_array(numbers, length);

  printf("\n\n");

  return 0;
}
