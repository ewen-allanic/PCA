#include "node.h"

int main(void) {
    node_t * head = list_create();

    head = list_insert(head, 5);
    head = list_insert(head, 8);
    head = list_insert(head, 19);
    head = list_headRemove(head);
    head = list_remove(head, 5);
    head = list_append(head, 32);
    list_get_data(head);
    printf("||");
    list_set_data(head, 4);
    list_print(head);

    return 0;
}
