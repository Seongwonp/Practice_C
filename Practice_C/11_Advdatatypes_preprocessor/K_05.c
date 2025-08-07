#include <stdio.h>
#include <stdlib.h>

struct Node {
    int x;
    struct Node* next;
};

int main(void) {
    struct Node* one = malloc(sizeof(struct Node));
    one->x = 10;
    one->next = NULL;

    struct Node* two = malloc(sizeof(struct Node));
    two->x = 20;
    two->next = one;

    struct Node* head = two;

    struct Node* curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = malloc(sizeof(struct Node));
    curr = curr->next;
    curr->next = NULL;
    curr->x = 30;

    curr = head;
    int cnt = 0;
    while (curr != NULL) {
        printf("Node #%d is %d\n", ++cnt, curr->x);
        curr = curr->next;
    }

    return 0;
}
