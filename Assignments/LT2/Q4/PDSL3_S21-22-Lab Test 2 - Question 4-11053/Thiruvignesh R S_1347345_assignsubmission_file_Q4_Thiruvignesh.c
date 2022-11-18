/* name:Thiruvignesh
Roll no.:21BT10022
Department:Biotechnology
Package:vs code
Operating system: Windows 11
*/

#include <stdio.h>
#define MAX 100

//struct for first and last names
typedef struct {
    char f_name[20];
    char l_name[20];
} name;

//struct for student details
typedef struct {
    name sname[30];
    char gender[4];
    float marks;
} Student;

//pseudo function declaration
int b_girl(Student s[MAX],int n);

int main(){
    Student S[MAX];
    int n,ind;

    printf("enter the number of students: ");
    scanf("%d",&n);
    
    //scanning student details
    printf("Enter the student details:\n");
    for (int i=0;i<n;i++){
        scanf("%s %s %s %f",&S[i].sname[i].f_name,&S[i].sname[i].l_name,&S[i].gender,&S[i].marks);
        printf("\n");
    }

    //printing student details
    printf("Printing the student records\n");
    for (int i=0;i<n;i++){
        printf("%s %s---%s---%f\n",&S[i].sname[i].f_name,&S[i].sname[i].l_name,&S[i].gender,&S[i].marks);
    }

    ind=b_girl(S,n);
    printf("best girl student: %s %s",&S[ind].sname[ind].f_name,&S[ind].sname[ind].l_name);

    return 0;
}

int b_girl(Student s[MAX],int n){
    int max=s[0].marks,temp;
    for (int i=0;i<n;i++){
        //checking for max marks and gender girl
        if (s[i].marks>max && s[i].gender[0]=="g"){
            max=s[i].marks;
            temp=i;
        }
    }
    return temp; //returns position of max marks
}
