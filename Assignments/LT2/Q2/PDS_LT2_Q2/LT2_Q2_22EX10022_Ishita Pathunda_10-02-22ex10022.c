/*
name-ishita pathunda
roll-22EX10022
*/
#include <stdio.h>

#include <stdlib.h>

#include <string.h>


struct StudentRecord {

    char rollno[11];

    char branch[3];

    struct {

        int day;

        int month;

        int year;

    } dob;

};


int main() {

    int n;

    scanf("%d", &n);

    getchar();


    struct StudentRecord* records = (struct StudentRecord*) malloc(n * sizeof(struct StudentRecord));


    for (int i = 0; i < n; i++) {


        fgets(records[i].rollno, sizeof(records[i].rollno), stdin);

        records[i].rollno[strcspn(records[i].rollno, "\n")] = '\0';


        fgets(records[i].branch, sizeof(records[i].branch), stdin);

        records[i].branch[strcspn(records[i].branch, "\n")] = '\0';



        scanf("%d/%d/%d", &records[i].dob.day, &records[i].dob.month, &records[i].dob.year);

        getchar();

    }

    printf("remaining records:\n");

    for (int i = 0; i < n; i++) {


        printf(" %s", records[i].rollno);

        printf(" %s", records[i].branch);

        printf(" %d/%d/%d", records[i].dob.day, records[i].dob.month, records[i].dob.year);

        printf("\n");

    }

    free(records);


    return 0;

}

