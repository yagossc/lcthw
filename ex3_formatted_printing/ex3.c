#include <stdio.h>

int main()
{
  int age = 69;
  int height = 172;

  printf("I am %d years old.\n", age);
  printf("I am %d centimeters tall.\n", height);

  printf("Hex of 69: %#x or %#X\n", age, age);

  printf("Tables using format\n");

  int cell1 = 123;
  int cell2 = 12345;
  int cell3 = 12345678;
  char *s = "column";

  // Print table
  printf("| %8s | %8s | %8s |\n", s, s, s);
  printf("| %8d | %8d | %8d |\n", cell1, cell2, cell3);
  printf("| %8d | %8d | %8d |\n", cell1, cell1, cell1);
  printf("| %8d | %8d | %8d |\n", cell3, cell2, cell2);
  printf("| %8d | %8d | %8d |\n", cell1, cell3, cell1);
  printf("| %8d | %8d | %8d |\n", cell1, cell2, cell2);
  printf("| %8d | %8d | %8d |\n", cell3, cell2, cell3);
  printf("| %8d | %8d | %8d |\n", cell3, cell2, cell1);


  return 0;
}
