#include "lists.h"

list_t *add_node(list_t **head, const char *str) 
{
    if (str == NULL)
        return (NULL);

    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);

    if (new_node->str == NULL) {
        free(new_node);
        return (NULL);
    }

    new_node->len = strlen(str);
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}

int main() 
{
    list_t *head = NULL;

    add_node(&head, "World");
    add_node(&head, "Hello");

    list_t *current = head;
    while (current != NULL) {
        printf("[%u] %s\n", current->len, current->str);
        current = current->next;
    }


    while (head != NULL) {
        list_t *temp = head;
        head = head->next;
        free(temp->str);
        free(temp);
    }

    return (0);
}

