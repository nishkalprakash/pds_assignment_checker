/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>
#define MAX 100

struct student{
    char name[100];
    char gender[100];
    float marks;
};

void input(int, struct student array[MAX]);
void print(int, struct student array[MAX]);
char best_student(int, struct student array[MAX]);

int main() {
int n;

struct student array[MAX];

printf("enter number of students:\n");
scanf("%d", &n);

input(n, array);
print(n, array);

char best=best_student(n, array);
return 0;
}

void input(int n, struct student array[MAX]){        // function definition for input of data by user
    for(int i=0; i<n; i++){
        scanf("%s", &array[i].name);
        scanf("%s", &array[i].gender);
        scanf("%f", &array[i].marks);
    }
}

void print(int n, struct student array[MAX]){        // function definition for printing of data which was entered by the user
    for(int i=0; i<n; i++){
    printf("student's info:\n");
    printf("name=%s\n", array[i].name);
    printf("gender=%s\n", array[i].gender);
    printf("marks=%f\n", array[i].marks);
    }

}

float best_student(int, struct student array[MAX]){   // function definition for finding best student
    float max;
    for (int i=0; i<n; i++){
        if(array[i].marks>array[i+1]){
            max=array[i].marks;
        }
    }
}
