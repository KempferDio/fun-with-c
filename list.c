#include "list.h"

list *list_init()
{
    list *head = malloc(sizeof(list));
    if (head == NULL)
    {
        printf("ERROR::MALLOC_ALLOCATION_ERROR");
        return NULL;
    }

    head->next = NULL;
    head->value = 0;
    return head;
}

void add(list *head, int value)
{
    list *current = head;

    //Road to tail of the list
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = malloc(sizeof(list));
    current->value = value;
    current->next->next = NULL;

    return;
}

void print_list(list *head)
{
    if (head == NULL)
    {
        printf("List is empty");
        return;
    }

    while (head->next != NULL)
    {
        printf("print_list: %d\n", head->value);
        head = head->next;
    }

    return;
}