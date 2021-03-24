#include <stdio.h>

int main() {
  float Nota;
  printf("Introduzca la nota obtenida (0-10): ");
  scanf("%f", &Nota);
  if (Nota >= 6) {
    puts("Aprobado");
  } else {
    puts("Reprobado");
  }
}
