# include<stdio.h>
# define MAX 30
 struct Student{
    char name[30];
    char gender[10];
    float marks;
};
//function for best student

int main(){
    
    int n, i, t;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student student[n];
    printf("Enter the student details.\n");
    for(i=0;i<n;i++){
            printf("Enter name of student %d: ", i+1);
            scanf("%s", student[i].name);
            scanf("%s", student[i].name);

            // fflush(stdin);
            printf("Enter gender(boy or girl) of student %d: ", i+1);
            scanf("%s", student[i].gender);

        printf("Enter marks of student %d: ", i+1);
            scanf("%f", &student[i].marks);
    }
    printf("Printing Student Details: \n");
    for(i=0;i<n;i++){
        printf(" %s\t%s\t%0.2f \n",student[i].name, student[i].gender, student[i].marks );

    }

    return 0;
}
