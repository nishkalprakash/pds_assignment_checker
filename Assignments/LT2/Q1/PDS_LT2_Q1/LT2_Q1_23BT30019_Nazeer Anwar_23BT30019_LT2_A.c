//23BT30019
//Nazeer Anwar



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROLL 30

typedef struct {
    int roll;
    char name[50];
    int points[4];
} Student;

int searchStudent(Student* students, int count, int roll) {
    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            return i;
        }
    }
    return -1;
}

int searchName(Student* students, int count, char* name) {
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

int searchPoints(Student* students, int count, int game, int points) {
    for (int i = 0; i < count; i++) {
        if (students[i].points[game] == points) {
            return i;
        }
    }
    return -1;
}

int cmpStudents(const void* a, const void* b) {
    Student* s1 = (Student*)a;
    Student* s2 = (Student*)b;
    int total1 = 0, total2 = 0;

    for (int i = 0; i < 4; i++) {
        total1 += s1->points[i];
        total2 += s2->points[i];
    }

    if (total1 > total2) {
        return -1;
    } else if (total1 < total2) {
        return 1;
    } else {
        int result = strcmp(s1->name, s2->name);
        if (result != 0) {
            return result;
        } else {
            return s1->roll - s2->roll;
        }
    }
}

void findChamp(Student* students, int count) {
    qsort(students, count, sizeof(Student), cmpStudents);

    printf("Champion(s):\n");
    for (int i = 0; i < count; i++) {
        if (students[i].points[0] == students[0].points[0] &&
            students[i].points[1] == students[0].points[1] &&
            students[i].points[2] == students[0].points[2] &&
            students[i].points[3] == students[0].points[3]) {
            printf("Name: %s\n", students[i].name);
            printf("Points: %d\n", students[i].points[0] + students[i].points[1] + students[i].points[2] + students[i].points[3]);
        }
    }
}

void findRunnersUp(Student* students, int count) {
    int max = students[0].points[0] + students[0].points[1] + students[0].points[2] + students[0].points[3];

    printf("Runners Up(s):\n");
    for (int i = 0; i < count; i++) {
        int currentMax = students[i].points[0] > students[i].points[1] ? students[i].points[0] : students[i].points[1];
        currentMax = students[i].points[2] > currentMax ? students[i].points[2] : currentMax;
        currentMax = students[i].points[3] > currentMax ? students[i].points[3] : currentMax;

        if (currentMax == max) {
            printf("Name: %s\n", students[i].name);
            printf("Points: %d\n", students[i].points[0] + students[i].points[1] + students[i].points[2] + students[i].points[3]);
        }
    }
}

void findConsolationWinner(Student* students, int count) {
    int max = 0;
    for (int i = 0; i < count; i++) {
        int currentMax = students[i].points[0] > students[i].points[1] ? students[i].points[0] : students[i].points[1];
        currentMax = students[i].points[2] > currentMax ? students[i].points[2] : currentMax;
        currentMax = students[i].points[3] > currentMax ? students[i].points[3] : currentMax;

        if (currentMax > max) {
            max = currentMax;
        }
    }

    printf("Consolation Winner(s):\n");
    for (int i = 0; i < count; i++) {
        int currentMax = students[i].points[0] > students[i].points[1] ? students[i].points[0] : students[i].points[1];
        currentMax = students[i].points[2] > currentMax ? students[i].points[2] : currentMax;
        currentMax = students[i].points[3] > currentMax ? students[i].points[3] : currentMax;

        if (currentMax == max) {
            printf("Name: %s\n", students[i].name);
            printf("Points: %d\n", students[i].points[0] + students[i].points[1] + students[i].points[2] + students[i].points[3]);
        }
    }
}

int main() {
    int n, m, x, y, points;
    char name[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);
        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter points:\n");
        for (int j = 0; j < 4; j++) {
            scanf("%d", &students[i].points[j]);
        }
    }

    findChamp(students, n);
    findRunnersUp(students, n);
    findConsolationWinner(students, n);

    return 0;
}
