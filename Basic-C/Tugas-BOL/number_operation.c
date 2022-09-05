//
//  number_operation.c
//  Basic-C
//
//  Created by Uwais Alqadri on 9/5/22.
//

#include <stdio.h>

int number_operation() {
  int limit;
  int multiplication;

  printf("Program sederhana untuk menampilkan deret bilangan kelipatan N di layar \n");

  printf("Masukkan Jumlah bilangan = "); scanf("%d", &limit);
  printf("Masukkan Kelipatan = "); scanf("%d", &multiplication);

  printf("Hasil = ");

  for(int i = 0; i <= limit; i++) {
    int result = i * multiplication;

    if (i == 0) continue;

    printf("%d ", result);
  }

  return 0;
}
