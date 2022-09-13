//
//  individual_TP1_W3_S5_R2.c
//  Basic-C
//
//  Created by Uwais Alqadri on 9/13/22.
//

#include <stdio.h>
#include <math.h>

int firstArithmetic(void); // A + B – C
int secondArithmetic(void); // A * ((B – C) / D)

int arithmeticOperation() {
  printf("OPERASI ARITMATIKA 1: A + B – C \n");
  printf("HASIL A + B – C : %d \n", firstArithmetic());
  printf("OPERASI ARITMATIKA 2: A * ((B – C) / D) \n");
  printf("HASIL A * ((B – C) / D) : %d \n", secondArithmetic());
  return 0;
}

int firstArithmetic() {
  int a, b, c;
  printf("Masukkan Nilai A: "); scanf("%d", &a);
  printf("Masukkan Nilai B: "); scanf("%d", &b);
  printf("Masukkan Nilai C: "); scanf("%d", &c);
  return a + b - c;
}

int secondArithmetic() {
  int a, b, c, d;
  printf("Masukkan Nilai A: "); scanf("%d", &a);
  printf("Masukkan Nilai B: "); scanf("%d", &b);
  printf("Masukkan Nilai C: "); scanf("%d", &c);
  printf("Masukkan Nilai D: "); scanf("%d", &d);
  return a * (b - c / d);
}
