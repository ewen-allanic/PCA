#include "node.h"

int main(void) {
    node_t * head = list_create();

    head = list_insert(&head, 5);
    list_print(head);

    return 0;
}
