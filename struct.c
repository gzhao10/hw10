#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

struct career* new_career(char *n, int s) {
  struct career *nc;
  nc = malloc(sizeof(struct career));
  strncpy(nc->name, n, sizeof(nc->name)-1);
  nc->salary = s;
  nc->next = NULL;
  return nc;
}

void print_list(struct career *c){
  while (c){
    printf("Name:%s Salary: %d\n", c->name, c->salary);
    c = c->next;
  }
}

struct career * insert_front(struct career *c, char *n, int s){
  struct career *nc = new_career(n, s);
  nc->next = c;
  return nc;
}

struct career * free_list(struct career *c){
  while (c){
    struct career * next = c->next;
    free(c);
    c = next;
  }
  return c;
}

struct career * remove_node(struct career *front, char *n, int data){
  struct career * f = front;
  if (strcmp(front->name, n) == 0 && front->salary == data){
    return front->next;
  }
  while(front->next != NULL){
    if(strcmp(front->next->name, n) == 0 && front->next->salary == data){
      front->next = front->next->next;
      return f;
    }
    front = front->next;
  }
  return f;
}
