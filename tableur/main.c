#include <stdio.h>
// Créé une liste vide
node_t * list_create(void) {
    return (node_t *)NULL;
}

// Récupérer la valeur d'un maillon
void * list_get_data(const node_t * node) {
    return node->data;
}

// Changer la valeur d'un maillon
void list_set_data(node_t * node, void * data) {
    node->data = data;
}

// Passer au maillon suivant
node_t * list_next(node_t * node, void * data) {
    return node->suivant;
}

// Ajouter un maillon en tête de liste
node_t * list_insert(node_t * head, void * data) {
    node_t * node = (node_t*)malloc(sizeof(node_t));
    if (node_t == NULL)
        return NULL;
    node->data = data;
    node->next = head;
    return node;
}

// Ajouter un maillon dans la liste
node_t * list_append(node_t * head, void * data) {

    /*node_t * node = malloc(sizeof(node_t));
    if (node == NULL)
        return NULL;

    node->data = data;
    node->next = NULL;

    node_t * suivant = head;
    while (suivant->next != NULL) {
        suivant = suivant->next;
    }

    suivant->next = node;
    return node;*/

    node_t * node = (node_t*)malloc(sizeof(node_t));
    node_t * last = head;

    node->data = data;
    node->next = NULL;

    if (head == NULL) {
        head = node;
        return head;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = node;
    return head;

}

// Supprime la première occurence dans la liste
node_t * list_remove(node_t * head, void * data) {
    node_t * temp = head;
    node_t * prev = NULL;

    if (temp != NULL && temp->next == data) {
        head = temp->next;
        delete temp;
        return head;
    }

    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return NULL;

    prev->next = temp->next;

    delete temp;
    return head;
}


//Supprime la tête de liste
node_t * list_headRemove(node_t * head) {
    if (head == NULL)
        return NULL;

    note_t * temp = head;
    head = head->next;

    delete temp;
    return head;
}

// Détruit la liste
void list_destroy(node_t * head) {
    node_t * current = head;
    node_t * next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    head = NULL;
}

void list_print(node_t * head) {
  while (head != NULL) {
     printf(" %d ", head->data);
     head = head->next;
  }
}

int main(void) {
    node_t * head = list_create();

    head = list_insert(&head, 5);
    list_print(head);

    return 0;
}
