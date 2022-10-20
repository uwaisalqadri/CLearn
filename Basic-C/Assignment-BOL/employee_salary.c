//
//  employee_salary.c
//  Basic-C
//
//  Created by Uwais Alqadri on 10/11/22.
//

#include <stdio.h>

/*
Buat program menggunakan struct untuk menghitung gaji harian pegawai, dengan ketentuan program sebagai berikut : (UWAIS)

Input 1: Nomor induk pegawai, nama pegawai, alamat, no_hp, Kategori,
Proses :
a.  Gaji pokok
    Staff D1   = Rp2.500.000
    Staff D2  = Rp2.000.000
    Staff D3  = Rp1.500.000

b.  Lemburan perjam = Rp10.000

Input 2: Masukan induk pegawai, jumlah jam lembur
Proses :
c.  Bila jumlah jam kerja > 8 jam maka kelebihan dihitung lembur yang besarnya 20.000/jam

 */

#define STAFF_D1 10
#define STAFF_D2 20
#define STAFF_D3 30

#define MAX_STRING 100000

struct Employee {
  char id[MAX_STRING];
  char name[MAX_STRING];
  char address[MAX_STRING];
  char phone[MAX_STRING];
  int category;
  int salary;
};

void print_prettified_employee(struct Employee emp, char* category);

int employee_salary() {

  struct Employee employee;

  int base_salary = 0;
  int overtime_bonus = 20000; // 10.000 atau 20.000?
  char* category_name = "";

  int working_hours = 0;
  int total_overtime_bonus = 0;

  printf("Masukkan Nomor Induk Pegawai = "); scanf("%s", employee.id);
  printf("Masukkan Nama Pegawai = "); scanf(" %[^\n]s", employee.name);
  printf("Masukkan Alamat Pegawai = "); scanf(" %[^\n]s", employee.address);
  printf("Masukkan No. HP Pegawai = "); scanf("%s", employee.phone);

  printf("Staff D1 = 10\n");
  printf("Staff D2 = 20\n");
  printf("Staff D3 = 30\n");

  printf("Masukkan Kategori Staff Pegawai Berdasarkan Informasi diatas = ");
  scanf("%d", &employee.category);

  printf("Masukkan Total Jam Kerja Hari ini = "); scanf("%d", &working_hours);

  switch (employee.category) {
    case STAFF_D1:
      base_salary = 2500000;
      category_name = "Staff D1";
      break;
    case STAFF_D2:
      base_salary = 2000000;
      category_name = "Staff D2";
      break;
    case STAFF_D3:
      base_salary = 1500000;
      category_name = "Staff D3";
      break;

    default:
      break;
  }

  for (int hour = 0; hour <= working_hours ; hour++) {
    if (hour > 8) total_overtime_bonus = overtime_bonus * hour;
  }

  employee.salary = base_salary + total_overtime_bonus;

  print_prettified_employee(employee, category_name);

  printf("Total Gaji Hari ini = Rp %d \n\n\n", employee.salary);

  return 0;
}

void print_prettified_employee(struct Employee emp, char* category) {
  printf("\n\n\n==========================================================================\n");
  printf("Nomor Induk Pegawai: %s \nNama Pegawai: %s \nAlamat: %s \nNo.Hp: %s \nKategori: %s \n", emp.id, emp.name, emp.address, emp.phone, category);
  printf("==========================================================================\n");
}
