#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct studentInfo {
    char* univ;
    int sNo;
    char* major;
    char name[15];
};

int isEqualStudent(struct studentInfo a, struct studentInfo b) {
    if (!strcmp(a.univ, b.univ) && !strcmp(a.major, b.major) && !strcmp(a.name, b.name) && a.sNo == b.sNo)
        return 1;
    else
        return 0;
}

int isEqualsNo(struct studentInfo students[], int sNo) {
    for (int i = 0; i < 3; i++) {
        if (students[i].sNo == sNo) {
            printf("Wrong student number!!\n");
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    struct studentInfo student[4] = { {"DCU" , 21000001, "ComputerSW", "Kim"}, {"DCU",21000002, "AIBigdata", "Lee"}, {"DCU",21000003, "SWConvergence","Park"} };

    int i;
    char temp[80];
    struct studentInfo* ptr = &student[3];
    printf("Input your name : ");
    scanf("%s", temp);
    strcpy(student[3].name, temp);
    while (1) {
        printf("Input your student number : ");
        scanf("%d", &(ptr->sNo));

        if (isEqualsNo(student, ptr->sNo))
            break;
    }
    printf("Input your major : ");
    scanf("%s", temp);
    ptr->major = malloc(sizeof(char) * strlen(temp));
    strcpy(ptr->major, temp);
    printf("Input your university : ");
    scanf("%s", temp);
    ptr->univ = malloc(sizeof(char) * strlen(temp));
    strcpy(ptr->univ, temp);
    for (i = 0; i < 4; i++) {
        printf("%s [%d, %s, %s]\n", student[i].univ, student[i].sNo, student[i].major, student[i].name);
    }
    if (isEqualStudent(student[0], student[3]))
        printf("student 0 and student 3 are same.");
    else
        printf("student 0 and student 3 are not same.");

    return 0;
}
