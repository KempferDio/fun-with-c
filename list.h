// Custom linked list
// Just for exp and fun

#ifndef LIST_C
#define LIST_C
#include <stdlib.h>
#include <stdio.h>

typedef struct list
{
    int value;
    struct list *next;

} list;

list *list_init();
void add(list *head, int value);
void print_list(list *head);

#endif // LIST_C