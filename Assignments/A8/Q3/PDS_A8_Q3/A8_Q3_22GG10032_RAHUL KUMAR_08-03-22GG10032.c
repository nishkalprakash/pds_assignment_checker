/*
* Section- 02
* Name - Rahul kumar
* Roll no. - 22GG10032
* Assignment - 08
* Question Number - 03
* Description - Structure to store the data of students
*/
#include<stdio.h>
#include<math.h>
float sum(float a,float b,float c){
   return a+b+c;
}
int main(){
    typedef struct student{
        char RollNo[10];
        float marks[3];
        float total;
    } student;
    int n;
    printf("Enter the value of n : \n");
    scanf("%d",&n);
    student S[n];
    for(int i=0;i<n;i++){
        printf("Enter the RollNo of %d student : \n",i+1);
        scanf("%s",S[i].RollNo);
        printf("Enter the marks of subject1 : \n");
        scanf("%f",&S[i].marks[0]);
        printf("Enter the marks of subject2 : \n");
        scanf("%f",&S[i].marks[1]);
        printf("Enter the marks of subject3 : \n");
        scanf("%f",&S[i].marks[2]);
        S[i].total = sum(S[i].marks[0],S[i].marks[1],S[i].marks[2]);
    }
    printf("Student record : \n");
    for(int i=0;i<n;i++){
        printf(" %s : ",S[i].RollNo);
        printf(" Marks %f %f %f\n",S[i].marks[0],S[i].marks[1],S[i].marks[2]);
        printf(" Total %f\n",S[i].total);
    }
    printf("Sorted student Record : \n");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(S[i].total<S[j].total){
                float temp;
                temp=S[i].total;
                S[i].total = S[j].total;
                S[j].total = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("Rollno. : %s\n ",S[i].RollNo);
        printf(" Marks : %f %f %f\n",S[i].marks[0],S[i].marks[1],S[i].marks[2]);
        printf(" Total : %f\n",S[i].total);
    }
    return 0;
}
