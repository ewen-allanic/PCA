#ifndef _NODE_H_
#define _NODE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    void * data;
    struct node * next;
} node_t;

node_t * list_create(void);
void * list_get_data(const node_t * node);
void list_set_data(node_t * node, void * data);
node_t * list_next(node_t * node, void * data);
node_t * list_insert(node_t * head, void * data);
node_t * list_append(node_t * head, void * data);
node_t * list_remove(node_t * head, void * data);
node_t * list_headRemove(node_t * head);
void list_destroy(node_t * head);
void list_print(node_t * head);

#endif /* _NODE_H_ */
