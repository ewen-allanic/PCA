struct node {
    void * data;
    struct node * suivant;
}
typedef struct node node_t;

node_t * list_create(void) {
    return (node_t *)NULL;
}

void * list_get_data(const node_t * node) {
    return node->data;
}
void list_set_data(node_t * node, void * data) {
    node->data = data;
}

node_t * list_next(note_t * node, void * data) {
    return node->suivant;
}

note_t * list_insert(note_t * head, void * data) {

}
