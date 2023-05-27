/*
* Section 2
* Roll No : 22HS10038
* Name : Nayan Chauhan
* Assignment No : 8
* Description :
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct Student{
        char RollNo[10];
        float marks[3];
        float total;
    };
    int n;
    scanf("%d", &n);
    struct Student *ptr;
    ptr = (struct Student *)calloc(n, sizeof(struct Student));
    for (int i = 0; i < n; ++i) {
        scanf("%s %f %f %f", (ptr + i)->RollNo, &(ptr + i)->marks[0], &(ptr + i)->marks[1], &(ptr + i)->marks[2]);
        (ptr + i)->total = ((ptr+i)->marks[0]+(ptr+i)->marks[1]+(ptr+i)->marks[2]);
    }
    printf("Student Records:\n\n");
    for (int i = 0; i < n; ++i) {
        printf("Roll no: %s\nMarks: %.2f %.2f %.2f\nTotal %.2f\n", (ptr + i)->RollNo, (ptr + i)->marks[0], (ptr + i)->marks[1], (ptr + i)->marks[2], (ptr + i)->total);
    }
    float t;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if ((ptr + j)->total < (ptr + j + 1)->total) {
                t = (ptr + j)->total;
                (ptr + j)->total = (ptr + j + 1)->total;
                (ptr + j + 1)->total = t;
                }
        }
    }
    printf("Sorted Student Records:\n\n");
    for (int i = 0; i < n; ++i) {
        printf("Roll no: %s\nMarks: %.2f %.2f %.2f\nTotal %.2f\n", (ptr + i)->RollNo, (ptr + i)->marks[0], (ptr + i)->marks[1], (ptr + i)->marks[2], (ptr + i)->total);
    }
    free(ptr);
    return 0;
}



