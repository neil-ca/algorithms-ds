#include <stdio.h>

typedef struct {
  void *next;
  int data;
} Node;

Node *head = NULL;

// add a node to the list
// remove a node from the list
// insert a node into a position in the list

void printMenu() {
  printf("You have the following options");
  printf("\t1. Add a node to the list\n");
  printf("\t2. Remove a node from the list\n");
  printf("\t3. Insert a node to the list\n");
  printf("\t4. Quit");
  return;
}
int main(int argc, char **argv) {
  int option = -1;
  while (option != 4) {
    printMenu();
    int num_received = scanf("%d", &option);
    if (num_received == 1 && option > 0 && option <= 4) {
      switch (option) {
      case 1:
      case 2:
      case 3:
      case 4:
        break;
      }
    }
  }
  return 0;
}
