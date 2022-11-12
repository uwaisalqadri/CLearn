//
//  half_lives_radiocative.c
//  Basic-C
//
//  Created by Uwais Alqadri on 11/12/22.
//

#include <stdio.h>
#include <math.h>

/*
12 / 4 = pangkat
0.5 * 0.5 * 0.5 * 10

t = dividend (atas)
T = divisor (bawah)
hasil1 = t / T = pangkat in decimal (quotient)

loop 0.5 in hasil1 = hasil2

hasil2 * No = Nt
*/

int main() {
  int pangkat;
  float hasil2;
  float no, t, T;
  float half = 0.5;

  printf("Masukkan nilai No = ");
  scanf("%f", &no);

  printf("Masukkan nilai t = ");
  scanf("%f", &t);

  printf("Masukkan nilai T 1/2 = ");
  scanf("%f", &T) ;

  printf("-----------------------------------------------------------------\n");
  pangkat = t/T;

  float a, total = 1;
  for(a = 1; a <= pangkat; a++){
    total=total*half;
  }

  hasil2 = total * no;

  printf("No: %f \n", no);
  printf("t: %f \n", t);
  printf("T: %f \n", T);
  printf("pangkat: %d \n", pangkat);
  printf("total: %f \n", total);
  printf("Hasil: %f \n", hasil2);
  return 0;
}
