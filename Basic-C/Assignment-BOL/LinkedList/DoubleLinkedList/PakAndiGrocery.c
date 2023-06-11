//
//  PakAndiGrocery.c
//  Basic-C
//
//  Created by Uwais Alqadri on 11/6/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item {
  char code[10];
  char name[50];
  int stock;
  struct Item* prev;
  struct Item* next;
};

struct Item* createItem(const char* code, const char* name, int stock) {
  struct Item* newItem = (struct Item*)malloc(sizeof(struct Item));
  strcpy(newItem->code, code);
  strcpy(newItem->name, name);
  newItem->stock = stock;
  newItem->prev = NULL;
  newItem->next = NULL;
  return newItem;
}

void insertItem(struct Item** head, struct Item* newItem) {
  if (*head == NULL) {
    *head = newItem;
  } else {
    newItem->next = *head;
    (*head)->prev = newItem;
    *head = newItem;
  }
}

void updateItem(struct Item** head, const char* code, int newStock) {
  struct Item* current = *head;
  while (current != NULL) {
    if (strcmp(current->code, code) == 0) {
      current->stock = newStock;
      printf("stock updated for item with code %s with updated stock %d", code, newStock);
      return;
    }
    current = current->next;
  }
  
  printf("item with code %s not exist", code);
}

void deleteItem(struct Item** head, const char* code) {
  if (*head == NULL) {
    printf("List is empty\n");
    return;
  }
  
  struct Item* current = *head;
  while (current != NULL) {
    if (strcmp(current->code, code) == 0) {
      if (current->prev == NULL) {
        *head = current->next;
        if (*head != NULL) {
          (*head)->prev = NULL;
        }
      } else {
        current->prev->next = current->next;
        if (current->next == NULL) {
          current->next->prev = current->prev;
        }
      }
      free(current);
      printf("Item with code %s deleted. \n", code);
    }
    current = current->next;
  }
}

void displayItems(struct Item* head) {
  if (head == NULL) {
    printf("List is empty\n");
    return;
  }
  
  struct Item* current = head;
  printf("Code\tName\t\tStock\n");
  while (current != NULL) {
    printf("%s\t%s\t\t%d\n", current->code, current->name, current->stock);
    current = current->next;
  }
}

void displayItemWithLowestStock(struct Item* head) {
  if (head == NULL) {
    printf("List is empty\n");
    return;
  }
  
  struct Item* current = head;
  int minStock = current->stock;
  
  while (current != NULL) {
    if (current->stock < minStock) {
      minStock = current->stock;
    }
    current = current->next;
  }
  
  current = head;
  printf("Code\tName\t\tStock\n");
  while (current != NULL) {
    if (current->stock == minStock) {
      printf("%s\t%s\t\t%d\n", current->code, current->name, current->stock);
    }
    current = current->next;
  }
}

int main(void) {
  
  struct Item* head = NULL;
  
  insertItem(&head, createItem("C001", "Rice", 50));
  insertItem(&head, createItem("C002", "Sugar", 30));
  insertItem(&head, createItem("C003", "Salt", 20));
  insertItem(&head, createItem("C004", "Bread", 100));
  insertItem(&head, createItem("C005", "Juice", 15));
  
  printf("Initial list of items:\n");
  displayItems(head);
  
  deleteItem(&head, "C002");
  
  printf("\nUpdated List of Items:\n");
  displayItems(head);
  
  printf("\nUpdate item with code C003 for stock 20 to 100:\n");
  updateItem(&head, "C003", 100);
  
  printf("\n\nUpdated List of Items:\n");
  displayItems(head);
  
  printf("\n\nItem with lowest stock:\n");
  displayItemWithLowestStock(head);
  
  // clean up memory
  struct Item* current = head;
  while (current != NULL) {
    struct Item* next = current->next;
    free(current);
    current = next;
  }
  
  head = NULL;
  
  return 0;
}
