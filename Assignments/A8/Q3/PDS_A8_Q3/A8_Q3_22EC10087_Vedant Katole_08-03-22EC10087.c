/*Name- Vedant Katole
Roll no-22EC10087
section 2
lab no - 8
problem no - 2*/

#include<stdio.h>
#include<string.h>

typedef struct student{
    char RollNo[10];
    float marks[3];
    float total;
}student;

void main()
{
    int n;
    printf("Enter th value of n: ");
    scanf("%d", &n);
    student *Stud;
    Stud = (student *) malloc(n * sizeof(student));
    for(int i = 0 ; i < n ; i++){
        scanf("%s", Stud[i].RollNo);
        for(int j=0 ; j < 3 ; j++){
            scanf("%f", &Stud[i].marks[j]);
        }
        Stud[i].total = Stud[i].marks[0] + Stud[i].marks[1] + Stud[i].marks[2];
    }

    student temp;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(Stud[j].total < Stud[j+1].total){
                strcpy(temp.RollNo,Stud[j].RollNo);
                strcpy(Stud[j].RollNo,Stud[j+1].RollNo);
                strcpy(Stud[j+1].RollNo,temp.RollNo);
                for(int a = 0; a < 3 ; a++){
                    temp.marks[a] = Stud[j].marks[a];
                }
                for(int a = 0; a < 3 ; a++){
                    Stud[j].marks[a] = Stud[j+1].marks[a];
                }
                for(int a = 0; a < 3 ; a++){
                Stud[j+1].marks[a] = temp.marks[a];
                }
                temp.total = Stud[j].total;
                Stud[j].total = Stud[j+1].total;
                Stud[j+1].total = temp.total;
            }
        }
    }
    printf("\nSorted Students record:\n");
    for(int i = 0 ; i < n ; i++){
        printf("\nRoll No : %s", Stud[i].RollNo);
        printf("\nMarks : %.2f\t%.2f\t%.2f", Stud[i].marks[0], Stud[i].marks[1], Stud[i].marks[2]);
        printf("\nTotal marks : %.2f", Stud[i].total);
    }
}
