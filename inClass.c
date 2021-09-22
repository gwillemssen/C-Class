#include <stdlib.h>
#include <stdio.h>

//linked list

typedef struct Node {
    int data;
    struct Node *next; //pointing to the next node of the list
} NodeT;

NodeT *init(const int n) //const means it never changes, init creates node and assigns it to data (assigns nodes data fields to n)
{
    NodeT *node = (NodeT *)malloc(sizeof(NodeT));
    node->data = n;
    node->next = NULL;//assuming data is forst or last element of list
    return node; //returned the pointer, possible because of malloc
}

NodeT *destroy(NodeT *node) //if this was longer than main then delete after every loop
{
    NodeT *next = node->next;//takes next and reassigns to node, free parent and return child so we never lose whats next
    free(node);
    return next;
}

void append(NodeT **head, int new_data) { //create node we are adding to the end
    NodeT *node = init(new_data);

    NodeT *last = *head; //derefernce head and set to last so we dont lose head

    if(*head == NULL) { //if the first one is nothing, make it node
        *head = node;
        return; //now have single elemnt list
    }

    while(last->next != NULL) { //if passed a valid node, make it the next one
        last = last->next;
    }
    last->next = node; //once there are no moer nodes in list, take last one and make it node
}

void print (NodeT *head) { //prints out data field of whatever is in node
    NodeT* tmp = head; //make tmp a copy of head so dont lose it

    while (tmp->next != NULL) {
        printf("%d", tmp->data); //walking through the list again but printing it
        tmp = tmp->next;
    }
    printf("%d", tmp->data); //last print will never actually print, this one is needed
}

int main(void) { //makes the list and assigns each number to head?
    NodeT *head = init(1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);

    print(head);
}