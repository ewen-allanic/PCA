// Strucure pouvant contenir des Int ou des String
typedef struct node {
    void * data;
    struct node * suivant;
} node_t;

#ifndef _NODE_H_
#define _NODE_H_

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

#endif /*_NODE_H_ */
