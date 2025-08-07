#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct LinkedList {
    char* name;
    struct LinkedList* next;
};
typedef struct LinkedList NODE;
typedef NODE* LINK;

LINK createNode(char* name);
LINK append(LINK head, int location, LINK curr);
LINK deleteNode(LINK head, int location);
int countNode(LINK head);
int printList(LINK head);

LINK createNode(char* name) {
    LINK curr;
    curr = (LINK)malloc(sizeof(NODE));
    if (name == NULL) {
        return NULL;
    }

    if (curr == NULL) {
        printf("Memory allocation problem!\n");
        return NULL;
    }

    curr->name = (char*)malloc(sizeof(char) * (strlen(name) + 1));
    if (curr->name == NULL) {
        printf("Memory allocation problem!\n");
        free(curr);
        return NULL;
    }
    strcpy(curr->name, name);
    curr->next = NULL;

    return curr;
}

LINK append(LINK head, int location, LINK curr) {

    if (location <= 0)
        return head;

    if (location == 1 || head == NULL) {
        curr->next = head;
        return curr;
    }

    int count = 1;
    LINK nextNode = head;
    while (nextNode->next != NULL && count < location - 1) {
        nextNode = nextNode->next;
        count++;
    }
    if (count == location - 1) {
        curr->next = nextNode->next;
        nextNode->next = curr;
    }

    return head;
}

LINK deleteNode(LINK head, int location) {

    if (head == NULL) {
        printf("List is Empty!\n");
        return NULL;
    }

    if (location<1 || location>countNode(head))
        return head;

    if (location == 1) {

        LINK temp = head;
        head = head->next;
        printf("Node #1 %s is delete!\n", temp->name);
        free(temp->name);
        free(temp);
        return head;
    }

    int count = 1;
    LINK nextNode = head;
    LINK prev = NULL;//이전 노드 가리키는 포인터
    while (nextNode != NULL && count < location) {
        prev = nextNode;
        nextNode = nextNode->next;
        count++;
    }

    if (nextNode != NULL) {
        prev->next = nextNode->next;
        printf("Node #%d %s is delete!\n", location, nextNode->name);
        free(nextNode->name);
        free(nextNode);
    }
    return head;
}

int countNode(LINK head) {
    int cnt = 0;
    LINK nextNode = head;
    while (nextNode != NULL) {
        cnt++;
        nextNode = nextNode->next;
    }
    return cnt;
}

int printList(LINK head) {
    int cnt = 0;
    LINK nextNode = head;
    while (nextNode != NULL) {
        printf("Node #%d is %s\n", ++cnt, nextNode->name);
        nextNode = nextNode->next;
    }
    return cnt;
}

int main(void) {

    int op = 0, location = 0;
    char* name;
    if ((name = (char*)malloc(sizeof(char) * 30)) == NULL) {
        printf("Memory allocation problem!");
        return -1;
    }
    LINK head = NULL;
    LINK curr;
    do {
        printf("Select menu [(1) append (2) delete (3) exit program] : ");
        scanf("%d", &op);
        switch (op) {
        case 1:
            printf("Input data >> ");
            scanf("%s", name);
            curr = createNode(name);
            if (curr == NULL) {
                printf("Memory allocation problem!");
                return -1;
            }
            while (1) {
                printf("input location (1 ~ %d) >> ", countNode(head) + 1);
                scanf("%d", &location);
                if (location >= 1 && location <= countNode(head) + 1)
                    break;
            }
            head = append(head, location, curr);
            printList(head);
            break;

        case 2:
            if (head == NULL) {
                printf("List is Empty!\n");
                break;
            }
            while (1) {
                printf("delete location (1 ~ %d) >> ", countNode(head));
                scanf("%d", &location);
                if (location >= 1 && location <= countNode(head))
                    break;
            }
            head = deleteNode(head, location);
            printList(head);
            break;
        case 3:
            break;
        default:
            printf("Enter the right number!\n");
        }
    } while (op != 3);
    free(name);
    LINK temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp->name);
        free(temp);
    }
    return 0;
}
