struct career{
  char name [256];
  int salary;
  struct career *next;
};

struct career* new_career(char *name, int salary);
void print_list(struct career *c);
struct career * insert_front(struct career * c, char * n, int s);
struct career * free_list(struct career * c);
struct career * remove_node(struct career *front, char* n, int data);
