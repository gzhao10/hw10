#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main(){
  struct career *c = new_career("Athlete", 5000000);
  c = insert_front(c, "Lawyer", 400000);
  c = insert_front(c, "Doctor", 300000);
  c = insert_front(c, "Teacher", 100000);
  c = insert_front(c, "Janitor", 50000);

  printf("Original list:\n");
  print_list(c);
  printf("\n");

  c = remove_node(c, "Teacher", 100000);

  printf("Removed teacher:\n");
  print_list(c);
  printf("\n");

  c = free_list(c);

  printf("Freed list:\n");
  print_list(c);
}
