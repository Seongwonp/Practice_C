#include <stdio.h>
#include <stdlib.h>

// 노드 구조체 정의
struct Node {
    int data;
    struct Node* next;
};
typedef struct Node Node;

// 스택 구조체 정의
struct Stack {
    Node* top;
};
typedef struct Stack Stack;

typedef Node* LINK;


// 노드를 생성
LINK createNode(int data) {
    LINK newNode = (LINK)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// 삽입
void push(Stack* stack, int data) {
    LINK newNode = createNode(data);
    newNode->next = stack->top;
    stack->top = newNode;
}

// 인출
int pop(Stack* stack) {
    
    if (stack->top == NULL) {
        printf("queue is Empty!\n");
        return -1;
    }
    
    LINK temp = stack->top;
    int popped = temp->data;
    stack->top = stack->top->next;
    free(temp);
    
    return popped;
}


int main(void) {
    Stack stack;
    stack.top = NULL; //초기화

    int choice, data;
    while (1) {
        printf("Select menu [(1) push (2) pop (3) exit program] : ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("push data >> ");
            scanf("%d", &data);
            push(&stack, data);
            printf("(%d) push\n", data);
            break;
        case 2:
            data = pop(&stack);
            if (data != -1) {
                printf("(%d) pop\n", data);
            }
            break;
        case 3:
            return 0;
            break;
        default:
            printf("Enter the right number!\n");
            break;
        }
    }

    return 0;
}
