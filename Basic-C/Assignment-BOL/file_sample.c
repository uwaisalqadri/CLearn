//
//  file_sample.c
//  Basic-C
//
//  Created by Uwais Alqadri on 10/30/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

//int main(){
//  FILE *file;
//  char buffer1[20];
//  char buffer2[20];
//  size_t tmp;
//
//  file = fopen("data.txt","r");
//  if(!file) {
//    printf("data.txt tidak ada atau tidak bisa dibuka");
//    exit(EXIT_FAILURE);
//  }
//
//  tmp = fread(buffer1,7,1,file);
//  if (tmp == 0) {
//    printf("baca data gagal");
//    fclose(file);
//    exit(EXIT_FAILURE);
//  }
//
//  else printf("Data buffer1: %s\n", buffer1);
//  fseek(file,8,SEEK_SET);
//  tmp = fread(buffer2,6,1,file);
//
//  if (tmp == 0) {
//    printf("baca data gagal");
//    fclose(file);
//    exit(EXIT_FAILURE);
//  }
//
//  else printf("Data buffer2: %s\n",buffer2);
//  getch ();
//}
