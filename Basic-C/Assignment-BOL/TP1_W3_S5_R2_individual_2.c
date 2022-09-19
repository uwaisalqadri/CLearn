//
//  TP1_W3_S5_R2_individual_2.c
//  Basic-C
//
//  Created by Uwais Alqadri on 9/13/22.
//

#include <stdio.h>

/*
 - Terdapat inputan nilai harga
 - Tidak ada potongan harga jika total pembelian kurang dari Rp200.000
 - Potongan harga akan diterima berdasarkan total harga
    - 5% jika total beli lebih dari Rp200.000 sd Rp 250.000
    - 10% jika total beli lebih dari Rp250.000 sd Rp 300.000
    - 15% jika total beli lebih dari Rp300.000 sd Rp 350.000
 */

int check_discount() {
  float price, discount_amount, discounted_price;

  printf("Masukkan Harga Barang untuk menentukan diskon: Rp "); scanf("%f", &price);

  while (price < 350.000) {
    if (price <= 200.000) {
      printf("Tidak potongan \n");
      break;
    }

    if (price > 200.000 && price <= 250.000) {
      discount_amount = (5 * price) / 100;
      discounted_price = (price - discount_amount);
      printf("Potongan 5%%, Harga Diskon: Rp %3.3f \n", discounted_price);
      break;
    }

    if (price > 250.000 && price <= 300.000) {
      discount_amount = (10 * price) / 100;
      discounted_price = (price - discount_amount);
      printf("Potongan 10%%, Harga Diskon: Rp %3.3f \n", discounted_price);
      break;
    }

    if (price > 300.000 && price <= 350.000) {
      discount_amount = (15 * price) / 100;
      discounted_price = (price - discount_amount);
      printf("Potongan 15%%, Harga Diskon: Rp %3.3f \n", discounted_price);
      break;
    }
  }

  return 0;
}
