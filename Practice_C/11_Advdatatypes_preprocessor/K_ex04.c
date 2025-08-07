#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 연락처를 저장할 구조체 정의
struct Contact {
    char name[50];
    char phoneNumber[20];
    char email[50];
    char organization[50];
    char position[50];
    struct Contact* next;
};

// 연락처 추가 함수
void addContact(struct Contact** head) {
    struct Contact* newContact = (struct Contact*)malloc(sizeof(struct Contact));
    if (newContact == NULL) {
        printf("메모리 할당 실패\n");
        return;
    }

    printf("이름: ");
    scanf("%s", newContact->name);
    printf("전화번호: ");
    scanf("%s", newContact->phoneNumber);
    printf("이메일 주소: ");
    scanf("%s", newContact->email);
    printf("소속: ");
    scanf("%s", newContact->organization);
    printf("직책: ");
    scanf("%s", newContact->position);

    newContact->next = *head;
    *head = newContact;

    printf("----연락처가 추가되었습니다----\n");
    printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 : %s, 직책 : %s\n", newContact->name, newContact->phoneNumber, newContact->email, newContact->organization, newContact->position);
}

// 연락처 삭제 함수
void deleteContact(struct Contact** head, const char* phoneNumber) {
    struct Contact* current = *head;
    struct Contact* prev = NULL;

    if (current == NULL) {
        printf("연락처가 비어있습니다.\n");
        return;
    }

    while (current != NULL && strcmp(current->phoneNumber, phoneNumber) != 0) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("해당하는 전화번호가 없습니다.\n");
        return;
    }

    if (prev == NULL) {
        *head = current->next;
    } else {
        prev->next = current->next;
    }

    printf("----삭제된 연락처 정보----\n");
    printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 : %s, 직책 : %s\n", current->name, current->phoneNumber, current->email, current->organization, current->position);
    free(current);
}

// 검색 함수
void searchContact(struct Contact* head, int option, const char* searchData) {
    if (head == NULL) {
        printf("연락처가 비어있습니다.\n");
        return;
    }

    struct Contact* current = head;
    int found = 0;

    while (current != NULL) {
        if ((option == 1 && strcmp(current->name, searchData) == 0) ||
            (option == 2 && strcmp(current->phoneNumber, searchData) == 0) ||
            (option == 3 && strcmp(current->organization, searchData) == 0)) {
            printf("----검색 결과----\n");
            printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 : %s, 직책 : %s\n", current->name, current->phoneNumber, current->email, current->organization, current->position);
            found = 1;
        }
        current = current->next;
    }

    if (!found) {
        printf("검색결과가 없습니다.\n");
    }
}

// 전체 연락처 출력 함수 (옵션에 따라 이름 순이나 소속 순 출력)
void printAllContacts(struct Contact* head, int option) {
    if (head == NULL) {
        printf("연락처가 비어있습니다.\n");
        return;
    }

    struct Contact* current = head;
    struct Contact* sortedContacts = NULL;

    while (current != NULL) {
        struct Contact* temp = current->next;
        if (option == 1) {
            current->next = sortedContacts;
            sortedContacts = current;
        } else {
            struct Contact* prev = NULL;
            struct Contact* sortedCurr = sortedContacts;
            while (sortedCurr != NULL && strcmp(sortedCurr->organization, current->organization) < 0) {
                prev = sortedCurr;
                sortedCurr = sortedCurr->next;
            }

            if (prev == NULL) {
                current->next = sortedContacts;
                sortedContacts = current;
            } else {
                prev->next = current;
                current->next = sortedCurr;
            }
        }
        current = temp;
    }

    printf("----");
    printf(option == 1 ? "이름 순" : "소속 순");
    printf(" 전체 연락처 출력----\n");

    while (sortedContacts != NULL) {
        printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 : %s, 직책 : %s\n", sortedContacts->name, sortedContacts->phoneNumber, sortedContacts->email, sortedContacts->organization, sortedContacts->position);
        struct Contact* temp = sortedContacts;
        sortedContacts = sortedContacts->next;
        free(temp);
    }
}

int main(void) {
    struct Contact* head = NULL;
    int choice, searchOption;
    char phoneNumber[20], searchData[50];

    do {
        printf("\nSelect menu [(1) 연락처 추가 (2) 연락처 삭제 (3) 연락처 수정 (4) 검색 (5) 전체 연락처 출력 (6) 종료] : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact(&head);
                break;
            case 2:
                printf("삭제할 전화번호를 입력하세요 >> ");
                scanf("%s", phoneNumber);
                deleteContact(&head, phoneNumber);
                break;
            case 3: {
                printf("수정할 전화번호를 입력하세요 >> ");
                scanf("%s", phoneNumber);
                struct Contact* temp = head;
                int found = 0;
                while (temp != NULL) {
                    if (strcmp(temp->phoneNumber, phoneNumber) == 0) {
                        printf("----기존 연락처 정보----\n");
                        printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 : %s, 직책 : %s\n", temp->name, temp->phoneNumber, temp->email, temp->organization, temp->position);

                        printf("수정된 연락처 정보를 입력하세요.\n");
                        printf("이름 >> ");
                        scanf("%s", temp->name);
                        printf("전화번호 >> ");
                        scanf("%s", temp->phoneNumber);
                        printf("이메일 주소 >> ");
                        scanf("%s", temp->email);
                        printf("소속 >> ");
                        scanf("%s", temp->organization);
                        printf("직책 >> ");
                        scanf("%s", temp->position);

                        printf("----수정된 연락처 정보----\n");
                        printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 : %s, 직책 : %s\n", temp->name, temp->phoneNumber, temp->email, temp->organization, temp->position);
                        found = 1;
                        break;
                    }
                    temp = temp->next;
                }
                if (!found) {
                    printf("해당 전화번호가 없습니다.\n");
                }
                break;
            }
            case 4:
                printf("검색 옵션 선택 [(1) 이름 (2) 전화번호 (3) 소속] : ");
                scanf("%d", &searchOption);
                printf("검색할 정보 입력 >> ");
                scanf("%s", searchData);
                searchContact(head, searchOption, searchData);
                break;
            case 5:
                printf("출력 옵션 선택 [(1) 이름 순 (2) 소속 순] : ");
                scanf("%d", &searchOption);
                printAllContacts(head, searchOption);
                break;
            case 6:
                break;
            default:
                printf("잘못된 옵션입니다.\n");
        }
    } while (choice != 6);

    return 0;
}
