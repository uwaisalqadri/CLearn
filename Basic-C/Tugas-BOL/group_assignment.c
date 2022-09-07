//
//  group_assignment.c
//  Basic-C
//
//  Created by Uwais Alqadri on 9/6/22.
//

#include <stdio.h>

int main() {
  int umur;
  char nama[60];
  char ice[20];

  printf("%d Mari Belajar Algoritma dengan Bahasa C %d\n", 3, 3);
  printf("========================================\n\n");
  printf("Masukkan nama anda[13..52] : ");
  scanf("%[^\n]s", nama);
  fflush(stdin);
  printf("Masukkan umur anda : ");
  scanf("%d", &umur);
  fflush(stdin);

  printf("\n%d%d%d%d%d ", 3, 3, 3, 3, 3);
  printf("Belajar algo itu menyenangkan seperti makan es krim");
  printf(" %d%d%d%d%d\n", 3, 3, 3, 3, 3);
  printf("Rasa Es Krim yang disukai : ");
  scanf("%s", ice);
  printf("================================================================\n\n");
  printf("%s berumur %d tahun menyukai es krim rasa %s\n\n", nama, umur, ice);
  printf("    .-\'`'\'-.\n");
  printf("   /        \\\n");
  printf("   |        |\n");
  printf("   /'---'--`\\\n");
  printf("  |          |\n");
  printf("  \\.--.---.-./\n");
  printf("   (.--..-._)\n");
  printf("    \\=-=-=-/\n");
  printf("     \\=-=-/\n");
  printf("      \\=-/\n");
  printf("       \\/\n");
  printf("\n");
  printf("SELAMAT BELAJAR ALGORITMA %d !\n\n", 2);

  fflush(stdin);
  getchar();

  return 0;
}
