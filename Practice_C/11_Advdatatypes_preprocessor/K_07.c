#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct Node {
    int data;
    struct Node* next;
} Node;
 
typedef struct Queue {
    Node* front;
    Node* rear;
    int count;
} Queue;
 
void InitQueue(Queue* queue);
 
int IsEmpty(Queue* queue);
 
void Enqueue(Queue* queue, int data);
 
int Dequeue(Queue* queue);
 
int main(void) {
    int op, num;
    Queue queue;
    InitQueue(&queue);
 
    do {
        printf("Select menu [(1) enqueue (2) dequeue (3) exit program] : ");
        scanf("%d", &op);
 
        switch (op) {
            case 1:
                printf("Input number : ");
                scanf("%d", &num);
                Enqueue(&queue, num);
                break;
 
            case 2:
                if (!IsEmpty(&queue)) {
                    printf("(%d) is dequeued.\n", Dequeue(&queue));
                } else {
                    printf("Queue is empty.\n");
                }
                break;
 
            case 3:
                break;
 
            default:
                break;
        }
    } while (op != 3);
 
    return 0;
}
 
void InitQueue(Queue* queue) {
    queue->front = queue->rear = NULL;
    queue->count = 0;
}
 
int IsEmpty(Queue* queue) {
    return queue->count == 0;
}
 
void Enqueue(Queue* queue, int data) {
    if (queue->count >= 5) {
        printf("Queue is full. (%d) is not enqueued.\n", data);
        return;
    }
 
    Node* now = (Node*)malloc(sizeof(Node));
    now->data = data;
    now->next = NULL;
 
    if (IsEmpty(queue)) {
        queue->front = now;
    } else {
        queue->rear->next = now;
    }
 
    queue->rear = now;
    queue->count++;
}
 
int Dequeue(Queue* queue) {
    int re = 0;
    Node* now;
 
    if (IsEmpty(queue)) {
        return re;
    }
 
    now = queue->front;
    re = now->data;
    queue->front = now->next;
    free(now);
    queue->count--;
 
    return re;
}
